
/*
 * Program to detect loop in a linked list.
 * Logic: Floyd's cycle detection algorithm
 *
 * 	Have a fast pointer and a slow pointer.
 * 	Increment fast pointer twice and slow pointer once
 * 	If fast and slow meet at a point, then there is a loop.
 * 	If fast reaches NULL, then no loop.
 */
#include "detectLoop.h"
void detectLoop(node *root)
{
	node *fast, *slow;
	fast = slow = root;

	printf("\nDetecting loop in linked list. \n");
	while ((fast->next != NULL) && (fast->next->next != NULL))
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			printf("Loop detected in the linked list\n");
			return;
		}

	}

	if (fast != slow)
	{
		printf("No loop in linked list. \n");
	}
}


