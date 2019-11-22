#include<stdio.h>
#define MAX 100
int adj[MAX][MAX],q[MAX],visited[MAX],i,j,n,v,front=-1,rear=-1;
void insert_queue(int v);
int isempty_queue();
int delete_queue();
void bfs(int v)
{
    insert_queue(v);
    visited[v]=1;
    while(!isempty_queue())
    {
        v = delete_queue();
        printf("%d ",v);

        for(i=1;i<=n;i++)
        {
            if(adj[v][i]==1 && visited[i]==0)
            {
                insert_queue(i);
                visited[i]=1;
            }
        }
    }
    printf("\n");
}
void insert_queue(int v)
{
    if(rear==MAX-1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=rear+1;
        q[rear]=v;
    }
}
int isempty_queue()
{
    if(front==-1 || front>rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int delete_queue()
{
    int delete_item;
    if(front==-1 || front>rear)
    {
        printf("Queue underflow\n");
    }
    delete_item=q[front];
    front=front+1;
    return delete_item;
}
int main()
{
    int count,maxedge,origin,destin;
    printf("Enter the number of vertices: ");
    scanf("%d",&n);
    maxedge = n*(n-1);
    for(count=1;count<=maxedge;count++)
    {
        printf("Enter edge: ");
        scanf("%d %d",&origin,&destin);
        if((origin==-1)&&(destin==-1))
        {
            break;
        }
        /*else if(origin>=n || destin>=n || origin<0 || destin<0)
        {
            printf("Invalid edge\n");
            count--;
        }*/
        else
        {
            adj[origin][destin]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        visited[i]=0;
    }
    printf("Enter starting vertex: ");
    scanf("%d",&v);
    bfs(v);
    return 0;
}
