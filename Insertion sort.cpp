#include<bits\stdc++.h>
int main()
{
    int arr[20],p,n;
    printf("Input elements number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j]){
                    p=arr[i];
            arr[i]=arr[j];
            arr[j]=p;

            }
        }
    }
    printf("Ascending order sorting:");
    for(int i=0;i<n;i++){
                    printf("%d ",arr[i]);
    }
}
