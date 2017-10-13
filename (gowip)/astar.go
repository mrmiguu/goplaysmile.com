package server

import (
	"sort"
)

// AStar is the AStar type.
type AStar struct {
	diag  float64
	point func(string) xy
}

// NewAStar instanciates the A* algorithm, passing it a handle to our terrain.
func NewAStar(diag float64, point func(string) xy) *AStar {
	return &AStar{diag, point}
}

// Find is the core A* pathfinding algorithm that uses stepping costs and a base
// heuristic function (optimistic) to determine the most optimal path.
func (a *AStar) Find(start, goal *node) []*node {

	// the set of nodes already evaluated
	var closedSet = []*node{}

	// the set of currently discovered nodes still to be evaluated
	// initially, only the start node is known
	var openSet = []*node{start}

	// for each node, which node it can most efficiently be reached from
	// if a node can be reached from many nodes, camefrom will eventually
	// contain the most efficient previous step
	var cameFrom = map[*node]*node{}

	// for each node, the cost of getting from the start node to that node
	// the cost of going from start to start is zero
	var gScore = map[*node]int{start: 0}

	// for each node, the total cost of getting from the start node to the
	// goal by passing by that node. that value is partly known, partly
	// heuristic
	// for the first node, that value is completely heuristic
	var fScore = map[*node]float64{start: a.estimate(start, goal)}

	for len(openSet) > 0 {

		// the node in openSet having the lowest fscore[] value
		current, openSet := openSet[0], openSet[1:]

		// goal found, create optimal pathway
		if current == goal {
			return a.reconstructPath(cameFrom, current)
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

				sort.Slice(openSet, func(i, j int) bool {
					return fScore[openSet[i]] < fScore[openSet[j]]
				})
			} else if tentativeGScore >= gScore[neighbor] { // not a better path
				continue
			}

			// this path is the best until now. record it!
			cameFrom[neighbor] = current
			gScore[neighbor] = tentativeGScore
			fScore[neighbor] = float64(gScore[neighbor]) + a.estimate(neighbor, goal)
		}
	}

	return []*node{start}
}

// The heuristic function to determine value of one node with respect to a
// goal node. It is used in tandem with a greedy function/value.
func (a *AStar) estimate(start, goal *node) float64 {

	var s = a.point(start.ID)
	var g = a.point(goal.ID)

	return dist(s.X, s.Y, g.X, g.Y) / a.diag
}

// Given a path from one node to another and a current position at the goal
// node, the pathway is unwound and emptied into a path list.
func (a *AStar) reconstructPath(cameFrom map[*node]*node, current *node) []*node {
	var path = []*node{current}

	_, exists := cameFrom[current]
	for exists {
		current = cameFrom[current]
		path = append([]*node{current}, path...)
		_, exists = cameFrom[current]
	}

	return path
}
