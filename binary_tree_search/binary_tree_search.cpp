#include <iostream>
#include "node.h"

using namespace std;

int main()
{
	int array[3] = {2, 3, 1};

	Node node = {
		array[0], 0, NULL, NULL
	};

	/*Node node_left = {
		array[2], 2, NULL, NULL
	};

	Node node_right = {
		array[1], 1, NULL, NULL
	};

	Node *node_ptr = &node;
	node_ptr->left = &node_left;
	node_ptr->right = &node_right;*/

	node.binary_tree_build(array, 3, &node);
	node.print_node();

	return 0;
}
