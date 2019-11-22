#include<bits/stdc++.h>
int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[10],n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int result=linear_search(a,n,x);
    if(result==-1){
        printf("not found");}
        else{
            printf("number is found at %d",result);
        }
        return 0;


}

