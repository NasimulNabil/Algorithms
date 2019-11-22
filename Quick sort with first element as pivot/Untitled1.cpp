#include<bits/stdc++.h>
int partition(int a[],int low,int high)
{
    int temp;
    int pivot = low;
    int i = low;
    int j=high;
    while(i<j)
    {
        while((a[i]<=a[pivot]) && (i<high))
        {
            i++;
        }
        while(a[j]>a[pivot])
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[pivot];
    a[pivot]=a[j];
    a[j]=temp;
    return j;

}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pi = partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}
int main()
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("Sorted array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

