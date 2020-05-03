/* Linked list and it's operations
 * Prints the linked list nodes 
 * 
 * Author - Raj Kumar Sanpui (raj.kumar.sanpui@gmail.com)
 * https://github.com/RajSanpui
 * 
 */
#include "printNode.h"

void printNode(node *root)
{
	node *temp = root;
	printf("\n Printing the linked list \n");
	while (temp != NULL)
	{
		printf("%d --->",temp->data);
		temp = temp->next;
	}
	printf("NULL");
	printf("\n");
}

