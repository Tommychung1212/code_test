#ifndef __NODE_H__
#define __NODE_H__

class Node {
	public:
		Node(int, int, Node *, Node *);
		void print_node();
		void binary_tree_build(int *, int, Node *);
	private:
		int number;
		int index;
		Node *left;
		Node *right;
};

#endif
