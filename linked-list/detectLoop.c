
/*
 * Program to detect loop in a linked list.
 * Logic: Floyd's cycle detection algorithm
 *
 * 	Have a fast pointer and a slow pointer.
 * 	Increment fast pointer twice and slow pointer once
 * 	If fast and slow meet at a point, then there is a loop.
 * 	If fast reaches NULL, then no loop.
 *
 *      Return:
 *            0 - No loop detected
 *            1 - Loop is detected
 */
#include "detectLoop.h"
void detectLoop(node *root)
{
	int isloop = 0;
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
			isloop = 1;
			break;
		}

	}

	if (fast != slow)
	{
		printf("No loop in linked list. \n");
		isloop = 0;
	}

	
	// Find the start node of the loop
	if (isloop)
	{
		fast = root;
		while (fast != slow) 
		{
			fast = fast->next;
			slow = slow->next;
		}
		printf("\n Start node of the loop is: %d \n",fast->data);
	}


}


