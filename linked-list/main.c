/* Linked list and it's operations
 * The main function 
 * 
 * Author - Raj Kumar Sanpui (raj.kumar.sanpui@gmail.com)
 * https://github.com/RajSanpui
 * 
 */


#include <stdio.h>
#include <stdlib.h>

#include "insertNode.h"
#include "printNode.h"
#include "nodeStruct.h"
#include "reverseLinkedList.h"


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
	reverseLinkedList(&root);
	printNode(root);
}
