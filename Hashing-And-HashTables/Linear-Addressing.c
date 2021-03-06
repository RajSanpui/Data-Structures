

/* Author - Raj Kumar Sanpui (raj.kumar.sanpui@gmail.com)
/* Data Structures - Hashing in C     
/*   with linear addressing as collision resolution technique */


#include <stdio.h>
#include <stdlib.h>

#define SIZE 7
#define HASH(x)(x % SIZE)

int hashTable[SIZE];

// Inserts function to hash table
int insert(int data)
{
  int slot, i;
  slot = HASH(data);

  if(hashTable[slot - 1] == -1)
  {
     hashTable[slot - 1] = data;
     printf("Key: %d, is mapped to slot: %d \n",data,slot);
     return 1;
  }

  // Original slot not empty so find an empty slot
  for (i=1; i<=SIZE; i++)
  {
    if(hashTable[(slot -1 + i) % SIZE] == -1)
    {
       hashTable[(slot -1 + i) % SIZE] = data;
       // Array index starts from 0, but while mentioning we mention it starts from 1, hence (((slot -1 + i) % SIZE)+1)
       printf("Key: %d, is mapped to slot: %d \n",data,(((slot -1 + i) % SIZE)+1));
       return 1;
    }
  }
  if (i>SIZE) {
    printf("No more slots left in hashTable \n");
    return 0;
  }
  
}

int searchkey(int data)
{
  int slot, i;
  slot = HASH(data);

  if(hashTable[slot - 1] == -1)
  {
     printf("ERROR: Key %d, is not found in slot: %d \n",data,slot);
     return 0;
  }
  else if(hashTable[slot - 1] == data)
  {
     printf("SUCCESS: Key %d, is found in slot: %d \n",data,slot);
     return 1;
  }

  // Original slot not found so find if present in other slots
  for (i=1; i<=SIZE; i++)
  {
    if(hashTable[(slot -1 + i) % SIZE] == data)
    {
       // Array index starts from 0, but while mentioning we mention it starts from 1, hence (((slot -1 + i) % SIZE)+1)
       printf("SUCCESS: Key %d, is mapped to slot: %d \n",data,(((slot -1 + i) % SIZE)+1));
       return 1;
    }
  }
  if (i>SIZE) {
    printf("ERROR: Key %d not found in hash table\n",data);
    return 0;
  }
 
}


void printHashTable()
{
  printf("\n Printing the hash-table:\n");

  for (int i=0; i<SIZE; i++)
    printf("%d \t",hashTable[i]);

}


int initialize()
{
  for (int i=0; i<SIZE; i++)
    hashTable[i] = -1;

}

int main()
{
 initialize(); 
 insert(3);
 insert(13);
 insert(23);

 insert(4);
 insert(8);
 insert(29);

 insert(16);
 insert(19);
 insert(25);

 printHashTable();
 printf("\n");

 searchkey(23);
 searchkey(16);
 searchkey(25);
 searchkey(19);
 
 return 0;
}  