#include<bits/stdc++.h>
void greedy_fractional_knapsack(float p[],float w[],int n,int W)
{
    float x[100];
    int i;
    float profit=0;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    int weight=0;
    for(i=0;i<n;i++)
    {
        if(weight+w[i]<=W)
        {
            x[i]=1;
            weight = weight+w[i];
            profit=profit+p[i];
        }
        else
        {
            x[i]=(W-weight)*(p[i]/w[i]);
            weight=W;
            profit=profit+x[i];
            break;
        }
    }

    printf("Maximum Profit is : %.2f",profit);
}
int main()
{
    float p[100],w[100],r[100];
    int n,W,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%f",&w[i]);
    }
    for(i=0;i<n;i++)
    {
        r[i]=p[i]/w[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(r[i]<r[j])
            {
                temp=r[j];
                r[j]=r[i];
                r[i]=temp;

                temp=p[j];
                p[j]=p[i];
                p[i]=temp;

                temp=w[j];
                w[j]=w[i];
                w[i]=temp;
            }
        }
    }
    scanf("%d",&W);
    greedy_fractional_knapsack(p,w,n,W);
    return 0;
}
