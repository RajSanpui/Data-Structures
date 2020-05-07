
/*
 * Program to add loop in a linked list.
 *
 * Input:
 *      root node
 *      node number after loop is to be inserted.
 *      E.g addLoop(&root, 3) will mean last node should 
 *              point back to 3rd node to create a loop or 
 *              3rd node should be loop start.
 */

#include "addLoop.h"

void addLoop(node **root, int loopStart)
{
	node *temp, *loopStartNode;
	int count = 1;

	temp = *root;
	while (count != loopStart) {
		temp = temp->next;
		count ++;
		if (temp == NULL)
		{
		  printf("Insufficient node. End of linked list	\n");
		  return;
		}
	}

	loopStartNode = temp;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = loopStartNode; // Point to the start of the loop
}



