#include<bits/stdc++.h>
int max(int a,int b)
{
    return (a>b)? a:b;
}
int knapsack(int pt[],int wt[],int n,int W)
{
    int i,w,j,m;
    int k[n+1][W+1];
    for(i=0;i<=n;i++)
    {
        for(w=0;w<=W;w++)
        {
            if(i==0 || w==0)
            {
                k[i][w]=0;
            }
            else if(wt[i-1]<=w)
            {
                k[i][w]=max(pt[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
            }
            else
            {
                k[i][w]=k[i-1][w];
            }
        }
    }
    i=n;
    j=W;
    while(i>0 || j>0)
    {
        if(k[i][j]==k[i-1][j])
        {
            m=0;
            printf("%d ",m);
            i--;

        }
        else
        {
            m=1;
            printf("%d ",m);
            j = j-wt[i-1];
            i--;

        }
    }
    printf("\n");
    return k[n][W];
}
int main()
{
    int pt[100],wt[100];
    int W,n,i,j,temp;
    scanf("%d",&n);
    printf("Profit:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&pt[i]);
    }
    printf("Weight:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    printf("Capacity:");
    scanf("%d",&W);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pt[i]>pt[j])
            {
                temp=pt[i];
                pt[i]=pt[j];
                pt[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(wt[i]>wt[j])
            {
                temp=wt[i];
                wt[i]=wt[j];
                wt[j]=temp;
            }
        }
    }
    printf("Maximum profit: %d",knapsack(pt,wt,n,W));
    return 0;
}
