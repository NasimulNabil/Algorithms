#include<bits/stdc++.h>
#define COL 5
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
    //return (a<b)? a:b;
}
int assembly(int a[][COL],int t[][COL],int e[],int x[])
{
    int T1[COL],T2[COL],i;
    T1[0]=e[0]+a[0][0];
    T2[0]=e[1]+a[1][0];
    for(i=1;i<COL;i++)
    {
        T1[i]=min(T1[i-1]+a[0][i],T2[i-1]+t[1][i]+a[0][i]);
        T2[i]=min(T2[i-1]+a[1][i],T1[i-1]+t[0][i]+a[1][i]);
    }
    return min(T1[COL-1]+x[0],T2[COL-1]+x[1]);
}
int main()
{
    int a[10][COL],row,i,j,n;
    int t[10][COL];
    int e[100],x[100];
    printf("Row:");
    scanf("%d",&row);
    printf("Number of entry and out cost:");
    scanf("%d",&n);
    printf("Activity cost:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transition cost:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
    printf("Entry cost:");
    for(i=0;i<n;i++)
    {

        scanf("%d",&e[i]);

    }
    printf("Out cost:");
    for(i=0;i<n;i++)
    {

        scanf("%d",&x[i]);

    }
    printf("Minimum cost:%d",assembly(a,t,e,x));
    return 0;
}
