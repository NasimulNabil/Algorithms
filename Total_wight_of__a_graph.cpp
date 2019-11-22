#include<bits\stdc++.h>
int main()
{
    int adj[20][20],i,j,n,weight=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            weight=weight+adj[i][j];
        }
    }
    weight=weight/2;
    printf("%d",weight);
    return 0;
}
