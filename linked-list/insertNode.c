/* Linked list and it's operations
 * insertNode - Inserts node to linked list
 * 
 * Author - Raj Kumar Sanpui (raj.kumar.sanpui@gmail.com)
 * https://github.com/RajSanpui
 * 
 */
#include "insertNode.h"

void insertNode(node **root, int val)
{
	node *r, *temp;

	r = (node*) malloc(sizeof(node));
	r->data = val;
	r->next = NULL;

	if ( *root == NULL) // This is the first node
	{
		*root = r;
		return;
	}

	temp = *root;
	while (temp->next != NULL) // Traverse to last node
	{
		temp = temp->next;
	}

	temp->next = r;
}

