#include <stdio.h>

int main ()
{
        FILE *file ;

    file = fopen ("test.txt ","w");
    int V=5;
    int adjMatrix[V][V];

    int i,j;


    if (file ==NULL){
     printf ("not found ...");
    }
    else{

//init matrix to 0
void init(int arr[][V])
{
    int V=5;
    int i,j;
    for(i = 0; i < V; i++)
        for(j = 0; j < V; j++)
            arr[i][j] = 0;
}

//Add edge. set arr[src][dest] = 1
void addEdge(int arr[][V],int src, int dest)
{
     arr[src][dest] = 1;
}

void printAdjMatrix(int arr[][V])
{
     int i, j;

     for(i = 0; i < V; i++)
     {
         for(j = 0; j < V; j++)
         {
             printf("%d ", arr[i][j]);
         }
         printf("\n");
     }
}

//print the adjMatrix

    int adjMatrix[V][V];

    init(adjMatrix);
    addEdge(adjMatrix,0,1);
    addEdge(adjMatrix,0,2);
    addEdge(adjMatrix,0,3);
    addEdge(adjMatrix,1,3);
    addEdge(adjMatrix,1,4);
    addEdge(adjMatrix,2,3);
    addEdge(adjMatrix,3,4);

    printAdjMatrix(adjMatrix);


       gets (adjMatrix[i][j]);
       fputs (adjMatrix[i][j],file);

        printf ("open ....");
        fclose (file );
    }
    }
