package node

type T struct {
	List []*T
	Hwys []int
	ID   string
}

func New(id string, hwys []int) *T {
	return &T{ID: id, Hwys: hwys}
}

func (t *T) IndexOf(ts []*T) int {
	for i, dt := range ts {
		if dt != t {
			continue
		}
		return i
	}
	return -1
}
