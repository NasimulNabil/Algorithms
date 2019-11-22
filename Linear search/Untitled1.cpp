#include<bits/stdc++.h>
int linear_search(int a[10],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,a[10],x,result;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    result=linear_search(a,n,x);
    if(result==-1)
    {
        printf("Number is not found");
    }
    else
    {
        printf("Number is found at position %d ",result);
    }
    return 0;
}
