#include<bits/stdc++.h>
#define NUM_STATION 5
int min(int a,int b)
{
    return (a<b)? a:b;
}
int assembly(int a[][NUM_STATION],int t[][NUM_STATION],int e[],int x[])
{
    int T1[NUM_STATION],T2[NUM_STATION],i;
    T1[0]=e[0]+a[0][0];
    T2[0]=e[1]+a[1][0];
    for(i=1;i<NUM_STATION;i++)
    {
        T1[i]=min(T1[i-1]+a[0][i],T2[i-1]+t[1][i]+a[0][i]);
        T2[i]=min(T2[i-1]+a[1][i],T1[i-1]+t[0][i]+a[1][i]);
    }
    return min(T1[NUM_STATION-1]+x[0],T2[NUM_STATION-1]+x[1]);
}
int main()
{
    int a[][NUM_STATION] = {{8,10,4,5,9},{9,6,7,5,6}};
    int t[][NUM_STATION] = {{0,2,3,1,3},{0,2,1,2,2}};
    int e[]={3,5};
    int x[]={2,1};
    printf("Minimum Cost: %d",assembly(a,t,e,x));
    return 0;
}
