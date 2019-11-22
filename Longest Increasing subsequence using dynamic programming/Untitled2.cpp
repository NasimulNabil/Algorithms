#include<bits/stdc++.h>
int lis(int a[],int n)
{
    int lis[n],i,j;
    lis[0]=1;
    for(i=1;i<n;i++)
    {
        lis[i]=1;
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
            }
        }
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        if(lis[i]>max)
        {
            max=lis[i];
        }
    }
    return max;
}
int main()
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Length of LIS is :%d",lis(a,n));
    return 0;
}
