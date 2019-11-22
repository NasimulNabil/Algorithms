#include<bits/stdc++.h>
void findmin(int a[],int n,int x)
{
    int coinlist[100],k=0;
    for(int i=n-1;i>=0;i--)
    {
        if(x>=a[i])
        {
            x = x-a[i];
            coinlist[k++]=a[i];
        }
        if(x==0)
        {
            break;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",coinlist[i]);
    }
}
int main()
{
    int a[100],n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    findmin(a,n,x);
    return 0;
}
