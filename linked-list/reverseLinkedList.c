
#include "reverseLinkedList.h"

void reverseLinkedList(node **root)
{
	node *curr, *next, *nnext;
	if ((*root == NULL) || ((*root)->next == NULL))
	{
		return;
	}
	curr = *root;
	next = curr->next;
	nnext = next->next;

	curr->next = NULL; // Make root as the last node

	while (nnext->next != NULL)
	{
		next->next = curr;

		curr = next;
		next = nnext;
		nnext = next->next;
	}

	next->next = curr;
	nnext->next = next;
	*root = nnext; // Set as Head
}


