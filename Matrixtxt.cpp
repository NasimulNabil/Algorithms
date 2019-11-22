#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("Adjacency.txt","w");
    int adj[10][10],i,j,v;
    if(fp==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("Enter the value of vertex:");
        scanf("%d",&v);
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                scanf("%d",&adj[i][j]);
            }

        }
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                fprintf(fp,"%d ",adj[i][j]);
            }
            fputs("\n",fp);
        }
        fclose(fp);
    }
    return 0;
}
