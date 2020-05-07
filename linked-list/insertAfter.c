#include "insertAfter.h"

// Insert a new node in a linked list after a given node
void insertAfter(node **root, int search, int val)
{
	node *temp, *r;

	temp = *root;
	while (temp != NULL)
	{
		if (temp->data == search) 
		{
			printf("\n Node %d is found..inserting new node after \n", search);
			r = (node*) malloc(sizeof(node));
			r->data = val;
			r->next = temp->next;

			temp->next = r;
			return;
		}
		temp = temp->next;
	}
	if (temp == NULL) {
		printf("%d not found in linked list...no value inserted \n",search);
	}
}




