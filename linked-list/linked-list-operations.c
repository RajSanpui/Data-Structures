/* Linked list and it's operations
 * insertNode, count, reverse etc
 * 
 * Author - Raj Kumar Sanpui (raj.kumar.sanpui@gmail.com)
 * https://github.com/RajSanpui
 * 
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} node;

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

int main()
{
	node *root = NULL;
	
	insertNode(&root, 10);
	insertNode(&root, 30);
	insertNode(&root, 15);
	insertNode(&root, 25);
	insertNode(&root, 5);
	insertNode(&root, 17);

	printNode(root);
}

