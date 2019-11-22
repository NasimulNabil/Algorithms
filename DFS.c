#include<stdio.h>
int adj[20][20],n,visited[20],source;
void DFS(int start)
{
    int k;
    visited[start]=1;
    printf("%d ",start);
    for(k=1;k<=n;k++)
    {
        if(!visited[k] && adj[start][k]==1)
        {
            DFS(k);
        }
    }
}
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    scanf("%d",&source);
    DFS(source);
    return 0;
}

