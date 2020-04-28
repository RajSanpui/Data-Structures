/* Author - Raj Kumar Sanpui (raj.kumar.sanpui@gmail.com)
/*
/* Data Structures - Hashing in C     
/*   with Separate chaining as collision resolution technique */


#include <stdlib.h>
#include <stdio.h>
#define N 10

#define HASH(x) (x % N)

typedef struct node 
{
 int data;
 struct node *next;
} node;

// Hash table to store values of type node
node* hashTable[N];


// The entire hashTable slots initialized to NULL
void initialize()
{

  for (int i=0; i<N; i++)
    hashTable[i] = (node*)NULL;  
}

// Search a node, return 1 on success and 0 on failure
void search(int val)
{
  node *temp;
  int slot;

  slot = HASH(val);
  temp = hashTable[slot];

  if (temp == NULL)
  {
    printf("The node with data %d not found at slot %d \n",val, slot);
  }
  else
  {
    while (temp != NULL)
    {
      if (temp->data == val) {
          printf("The node with data %d is found at slot %d \n",val, slot);   
          break;
      }
      else {
         temp = temp->next;
      }
    }
  }
}
     
// Insert into hashTable
void insert(int data)
{
   node *r, *head;

  // Find the slot to be inserted
   int slot;
   slot = HASH(data);

   r = (node*) malloc(sizeof(node));
   r->data = data;
   r->next = NULL;

   if (hashTable[slot] == NULL) // If this is the first node inserted
   {
      hashTable[slot] = r;
   }
   else {
      head = hashTable[slot]; // Make new node as the first head
      r->next = head;
      hashTable[slot] = r;
   }
}


int main()
{
  initialize();
  printf("Entering values in hash table \n");
  insert(5);
  insert(15);
  insert(25);

  insert(3);
  insert(13);
  insert(23);

  insert(7);
  insert(17);
  insert(27);

  search(13);
  search(15);
  search(1);
  search(8);

  return 0;
}