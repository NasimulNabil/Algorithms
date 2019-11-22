#include<bits/stdc++.h>
#include<conio.h>

int Graph[100][100],weight[100][100],visited[100],n,distance,temp=0;

int minimum(int k,int arr2[])
{
    int i,m=arr2[0];
    for(i=1;i<k;i++)
    {
        if(arr2[i]<m)
            m =arr2[i];
    }
    return m;
}
void DFS(int start,int arr[])
{
    int i,j=0,arr2[n];

    visited[start]=1;

	for(i=0;i<n;i++)
       if(!visited[i] && Graph[start][i]==1)
       {
           arr2[j] = weight[start][i];
           j=j+1;
       }

     for(i=0;i<n;i++)
       if(!visited[i] && weight[start][i]== minimum(j,arr2) && temp<=distance)
       {
           printf("%d ",arr[start]);
           temp =temp+weight[start][i];
           DFS(i,arr);
       }
}

int main()
{
    int i,j,s;

    printf("Enter number of nodes: ");
	scanf("%d",&n);

	int arr[n];

	printf("Enter the nodes: ");
	for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }


	printf("\nEnter adjacency matrix of the graph:\n");

	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&Graph[i][j]);
/*Adjancecy matrix
0 1 1 1 0 0 0 0 0
1 0 1 0 0 1 0 1 0
1 1 0 1 1 1 0 0 0
1 0 1 0 1 0 0 0 1
0 0 1 1 0 1 1 0 0
0 1 1 0 1 0 1 1 0
0 0 0 0 1 1 0 1 1
0 1 0 0 0 1 1 0 1
0 0 0 1 0 0 1 1 0
*/

    printf("\nEnter adjacency matrix with weight:\n");

	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&weight[i][j]);
/*Adjacency matrix with weight
0 22 9 12 0 0 0 0 0
22 0 35 0 0 36 0 34 0
9 35 0 4 65 42 0 0 0
12 0 4 0 33 0 0 0 30
0 0 65 33 0 18 23 0 0
0 36 32 0 18 0 39 24 0
0 0 0 0 23 39 0 35 21
0 34 0 0 0 24 25 0 19
0 0 0 30 0 0 21 19 0
*/



    printf("\nEnter the index of starting node (0-%d) : ",n-1);
    scanf("%d",&s);

    printf("\nEnter the maximum distance: ");
    scanf("%d",&distance);

    printf("\nThe specific cities where she can supply: ");
    DFS(s,arr);

    getch();
}
