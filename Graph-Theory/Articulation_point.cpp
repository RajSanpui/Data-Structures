#include <iostream>
#define V 4
using namespace std;
 
int visited[V];
int discArr[V], minArr[V], parent[V]; // Trojan's algorithm
 
int discVal = 0;
int minVal = 0;
 
void dfs(int Graph[V][V], int start)
{
   cout << start << "<---";
   visited[start]=1;
 
   discVal++; minVal++;
   discArr[start] = discVal;
   minArr[start] = minVal;
   int children = 0;
 
   for (int i=0; i<V; i++)
   {
      if (Graph[start][i] == 1)  
      {
          if (!visited[i])
          {
            parent[i] = start;
            children++;
            dfs(Graph, i);
            minArr[start] = min(minArr[i], minArr[start]);
          }
          else {
             minArr[start] = min(discArr[i], minArr[start]);
          } 
      }
   }
}
 
 
int main()
{

/*
  int Graph[4][4] = {{0, 1, 0, 0},
                     {0, 0, 1, 1},
                     {0, 0, 0, 0},
                     {1, 0, 0, 0} // Consider back-edge from node 3 to 0
                     };


  int Graph[4][4] = {{0, 1, 0, 1},
                     {0, 0, 1, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0} 
                     };
*/

int Graph[4][4] = {{0, 1, 0, 1},
                   {0, 0, 1, 0},
                   {0, 0, 0, 1},
                   {0, 0, 0, 0} 
                   };
 
  for (int i=0; i<V; i++)
     visited[i] = 0;
 
  for (int i=0; i<V; i++)
     parent[i] = -1;
 
 
  dfs(Graph, 0);
 
  printf("\nPrinting min values\n");
  for (int i=0; i<V; i++)
     printf("%d -> %d\n",i,minArr[i]);
 
  printf("\n");
 
  printf("Printing disc values\n");
  for (int i=0; i<V; i++)
     printf("%d -> %d\n",i,discArr[i]);
 
  printf("\n");
 
  printf("Printing parent nodes\n");
  for (int i=0; i<V; i++)
     printf("%d -> %d\n",i,parent[i]);
}
