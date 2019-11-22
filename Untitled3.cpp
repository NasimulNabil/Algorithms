#include<bits/stdc++.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int lcs(char a[],char b[],int m,int n)
{
    int L[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                L[i][j]=0;
            }
            else if(a[i-1]==b[j-1])
            {
                L[i][j]=L[i-1][j-1]+1;
            }
            else
            {
                L[i][j]=max(L[i][j-1],L[i-1][j]);
            }
        }
    }
    return L[m][n];
}
int main()
{
    char a[100],b[100];
    int m,n;
    printf("First Sequence:");
    scanf("%s",a);
    printf("Second Sequence:");
    scanf("%s",b);
    m = strlen(a);
    n=strlen(b);
    printf("Length of LCS is : %d",lcs(a,b,m,n));
    return 0;
}
