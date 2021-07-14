#include <iostream>
#include "node.h"

using namespace std;

Node::Node(int number, int index, Node *left, Node *right)
{
	this->number = number;
	this->index = index;
	this->left = left;
	this->right = right;
}

void Node::print_node()
{
	cout << "node number = " << this->number << endl;
	cout << "node index = " << this->index << endl;
}

void Node::binary_tree_build(int *arr, int arr_size, Node *first_node)
{
        Node *pre_node = first_node;
	Node *current_node = first_node;

        if (arr_size == 1)
                return;

        for (int i = 1; i < arr_size; i++) {
                while (current_node != NULL) {
			pre_node = current_node;
                        if (arr[i] > pre_node->number)
                                current_node = pre_node->right;
                        else
                                current_node = pre_node->left;
                }
                
		/* Create new node for this arr member */
		Node new_node = {
                                arr[i], i, NULL, NULL
                        };
		//new_node.print_node(&new_node);

		if (arr[i] > pre_node->number) {
			/* Set new node at right of pre node */
			//pre_node->right = &new_node;
			
			//new_node.print_node();
		} else {
			/* Set new node at left of pre node */
                        //pre_node->left = &new_node;
			
			//new_node.print_node();
		}

                /* Return pre node and current node to first node */
                pre_node = current_node = first_node;
        }
}
