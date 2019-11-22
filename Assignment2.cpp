#include<bits/stdc++.h>
int n,graph[100][100],cost=0;

int minKey(int key[], bool mstSet[])
{
    int m = INT_MAX, min_index;

    for (int i = 0; i < n; i++)
        if (mstSet[i] == false && key[i] < m)
            m = key[i], min_index = i;

    return min_index;
}

int printMST(int parent[])
{
    printf("\nEdge \tWeight\n");
    for (int i = 1; i < n; i++)
    {
        printf("%d - %d \t%d \n", parent[i]+1, i+1, graph[i][parent[i]]);
        cost=cost+graph[i][parent[i]];
    }

    printf("\nMinimum Cost: %d\n",cost);

}

void primMST()
{
    int parent[n],key[n];
    bool mstSet[n];

    for (int i = 0; i < n; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    key[0] = 0;
    parent[0] = -1;

    for (int i = 0; i < n - 1; i++) {
        int u = minKey(key, mstSet);

        mstSet[u] = true;
        for (int v = 0; v < n; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printMST(parent);
}

int main()
{
    int i,j;
    printf("Enter the number of Nodes: ");
    scanf("%d",&n);
    printf("Enter the weights:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &graph[i][j]);
/*
0 2 4 1 0 0 0
2 0 0 3 10 0 0
4 0 0 2 0 5 0
1 3 2 0 2 8 4
0 10 0 2 0 0 6
0 0 5 8 0 0 1
0 0 0 4 6 1 0
*/

    primMST();

    return 0;
}
