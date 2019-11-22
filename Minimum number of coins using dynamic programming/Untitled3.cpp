#include<bits/stdc++.h>
const int INF = 10000;
int minimumcoins(int c[],int n,int v)
{
    int table[v+1],i,j;
    table[0]=0;
    for(i=1;i<=v;i++)
    {
        table[i]=INF;
    }
    for(i=1;i<=v;i++)
    {
        for(j=0;j<n;j++)
        {
            if(c[j]<=i)
            {
                int res = table[i-c[j]];
                if(res!=INF && res+1<table[i])
                {
                    table[i] = res+1;
                }
            }
        }
    }
    return table[v];
}
int main()
{
    int c[100],n,v;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    scanf("%d",&v);
    printf("Minimum number of coins required for %d are : %d",v,minimumcoins(c,n,v));
    return 0;

}
