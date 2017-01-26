package;

import haxe.ds.ArraySort;

using Consts;
using Math;

class AI {

    // the final optimal path
    public var path: Array<Node>;

    // terrain
    var t: Terrain;

    // frontier
    var f: Array<Node>;

    // visited
    var v: Array<Node>;

    // optimal parents
    var p: Map<Node, Node>;

    // the final position
    var initial: Node;
    var goal: Node;

    public function new(initial: Node, goal: Node, t: Terrain) {

        // set the variables
        this.t = t;
        this.goal = goal;
        this.initial = initial;
        initial.pre = null;

        // empty final path
        path = [];

        // add our initial node to the empty frontier
        f = [initial];

        // empty closed set (visited)
        v = [];

        // search graph
        while (f.length > 0) progress();
    }

    function backtrack(n: Node) {

        // node cursor
        var x = n;

        while (x.pre != null) {

            path.unshift(x); // add node to path and progress
            x = x.pre; // progress x to non-null parent
        }
    }

    function progress() {

        var n = f.shift(); // pop top

        if (n == goal) {

            backtrack(n); // populate the path
            return;
        }

        // add unvisited neighbors to priority queue
        for (np in n.list) {

            // if visited, dont add to the priority queue
            if (v.indexOf(np) >= 0) continue;

            f.push(np); // add to frontier

            np.pre = n; // set parent
            np.g = n.g + 1; // set depth

            prioritize(np); // add to priority queue
        }
        
        v.push(n); // n is visited
    }

    function prioritize(n: Node) {

        // set heuristic to distance between
        // frontier node and goal node
        var p1 = t.point(n.id);
        var p2 = t.point(t.goal);
        n.h = p1.x.dist(p1.y, p2.x, p2.y) / t.diag;

        ArraySort.sort(f, function(a, b) {

            // sort by cost (g + h)
            var ha = a.g + a.h;
            var hb = b.g + b.h;

            return if (ha < hb) -1
                else if (ha == hb) 0
                else 1;
        });
    }
}