package terrain

import (
	"sort"

	"github.com/mrmiguu/gps_online/node"
)

type astar struct {
	t *T
}

/* Instanciates the A* algorithm, passing it a handle to our terrain. */
func New(t *T) *astar {
	return &astar{t}
}

/* The core A* pathfinding algorithm that uses stepping costs and a base
heuristic function (optimistic) to determine the most optimal path. */
func (t *astar) Find(start, goal *node.T) {

	// the set of nodes already evaluated
	var closedSet = []*node.T{}

	// the set of currently discovered nodes still to be evaluated
	// initially, only the start node is known
	var openSet = []*node.T{start}

	// for each node, which node it can most efficiently be reached from
	// if a node can be reached from many nodes, camefrom will eventually
	// contain the most efficient previous step
	var cameFrom = map[*node.T]*node.T{}

	// for each node, the cost of getting from the start node to that node
	// the cost of going from start to start is zero
	var gScore = map[*node.T]int{start: 0}

	// for each node, the total cost of getting from the start node to the
	// goal by passing by that node. that value is partly known, partly
	// heuristic
	// for the first node, that value is completely heuristic
	var fScore = map[*node.T]float64{start: t.estimate(start, goal)}

	for len(openSet) > 0 {

		// the node in openSet having the lowest fscore[] value
		current, openSet := openSet[0], openSet[1:]

		// goal found, create optimal pathway
		if current == goal {
			return t.reconstructPath(cameFrom, current)
		}

		closedSet = append(closedSet, current)

		for _, neighbor := range current.List {

			// ignore the neighbor which is already evaluated
			if neighbor.IndexOf(closedSet) != -1 {
				continue
			}

			// the distance from start to a neighbor
			var tentativeGScore = gScore[current] + 1

			if neighbor.IndexOf(openSet) == -1 { // no neighbor in repeat
				openSet = append(openSet, neighbor) // discover a new node

				sort.Slice(openSet, func(i, j int) {
					return fScore[openSet[i]] < fScore[openSet[j]]
				})
			} else if tentativeGScore >= gScore[neighbor] { // not a better path
				continue
			}

			// this path is the best until now. record it!
			cameFrom[neighbor] = current
			gScore[neighbor] = tentativeGScore
			fScore[neighbor] = gScore[neighbor] + t.estimate(neighbor, goal)
		}
	}

	return []*node.T{start}
}

/* The heuristic function to determine value of one node with respect to a
goal node. It is used in tandem with a greedy function/value. */
func (t *astar) estimate(start, goal *node.T) float64 {

	var a = t.t.Point(start.id)
	var b = t.t.Point(goal.id)

	return c.Dist(a.x, a.y, b.x, b.y) / t.t.Diag
}

/* Given a path from one node to another and a current position at the goal
node, the pathway is unwound and emptied into a path list. */
func (t *astar) reconstructPath(cameFrom map[*node.T]*node.T, current *node.T) {
	var path = []*node.T{current}

	_, exists := cameFrom[current]
	for exists {
		current = cameFrom[current]
		path = append([]*node.T{current}, path...)
		_, exists = cameFrom[current]
	}

	return path
}
