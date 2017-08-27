package node

type Node struct {
	List []*Node
	Hwys []int
	ID   string
}

func New(id string, hwys []int) *Node {
	return &Node{ID: id, Hwys: hwys}
}

func (n *Node) IndexOf(ts []*Node) int {
	for i, dt := range ts {
		if dt != n {
			continue
		}
		return i
	}
	return -1
}
