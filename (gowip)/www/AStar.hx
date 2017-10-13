package;

using C;

class AStar {

    var t: Terrain;

    /* Instanciates the A* algorithm, passing it a handle to our terrain. */
    public function new(t: Terrain) {

        this.t = t;
    }

    /* The core A* pathfinding algorithm that uses stepping costs and a base
    heuristic function (optimistic) to determine the most optimal path. */
    public function find(start: Node, goal: Node) {

        // the set of nodes already evaluated
        var closedSet = [];

        // the set of currently discovered nodes still to be evaluated
        // initially, only the start node is known
        var openSet = [start];

        // for each node, which node it can most efficiently be reached from
        // if a node can be reached from many nodes, camefrom will eventually
        // contain the most efficient previous step
        var cameFrom = new Map<Node,Node>();

        // for each node, the cost of getting from the start node to that node
        // the cost of going from start to start is zero
        var gScore = [start => 0];

        // for each node, the total cost of getting from the start node to the
        // goal by passing by that node. that value is partly known, partly
        // heuristic
        // for the first node, that value is completely heuristic
        var fScore = [start => estimate(start, goal)];

        while (openSet.length > 0) {

            // the node in openSet having the lowest fscore[] value
            var current = openSet.shift();

            // goal found, create optimal pathway
            if (current == goal) return reconstructPath(cameFrom, current);

            closedSet.push(current);

            for (neighbor in current.list) {

                // ignore the neighbor which is already evaluated
                if (closedSet.indexOf(neighbor) != -1) continue;

                // the distance from start to a neighbor
                var tentativeGScore = gScore[current] + 1;

                if (openSet.indexOf(neighbor) == -1) { // no neighbor in repeat

                    openSet.push(neighbor); // discover a new node
                    openSet.sort(function(a, b) {

                        var fa = fScore[a];
                        var fb = fScore[b];

                        return if (fa < fb) -1
                            else if (fa == fb) 0
                            else 1;
                    });

                // not a better path
                } else if (tentativeGScore >= gScore[neighbor]) continue;

                // this path is the best until now. record it!
                cameFrom[neighbor] = current;
                gScore[neighbor] = tentativeGScore;
                fScore[neighbor] = gScore[neighbor] + estimate(neighbor, goal);
            }
        }

        return [start];
    }

    /* The heuristic function to determine value of one node with respect to a
    goal node. It is used in tandem with a greedy function/value. */
    function estimate(start: Node, goal: Node) {

        var a = t.point(start.id);
        var b = t.point(goal.id);

        return a.x.dist(a.y, b.x, b.y) / t.diag;
    }

    /* Given a path from one node to another and a current position at the goal
    node, the pathway is unwound and emptied into a path list. */
    function reconstructPath(cameFrom: Map<Node,Node>, current: Node) {

        var path = [current];

        while (cameFrom.exists(current)) {

            current = cameFrom[current];
            path.unshift(current);
        }

        return path;
    }
}