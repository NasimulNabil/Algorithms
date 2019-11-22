#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[10],int n,int x)
{
    int mid,low,high;
    low=0;
    high=n-1;
    for(int i=0;i<n;i++)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else
        {
            if(x<a[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}
int main()
{
    int a[10],n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=sizeof(a)/sizeof(a[0]);
    sort(a,a+m);
    scanf("%d",&x);
    int result=binary_search(a,n,x);
    if(result==-1)
    {
        printf("Not Found");
    }
    else
    {
        printf("number is found at position %d",result);
    }
    return 0;
}
