
/* Program to find middle node of linked list.
 *
 *  Concept - Take a fast ptr, and a slow ptr
 *            Increment fast ptr twice and slow once.
 *            When fast ptr reaches the end, the slow ptr is at mid
 *
 */


#include "findMidNode.h"

void findMidNode(node *root)
{
	node *slow, *fast;
	slow = fast = root;

	if ((root == NULL) || (root->next == NULL))
		return;

	while (fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	printf("Mid node is: %d \n", slow->data);
}

