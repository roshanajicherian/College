#include <stdio.h>
#define MAX 100
int adjacneyMatrix[MAX][MAX];
void createGraph()
{
    int graphType=-1,maxEdges=0,n=0,v=0;
    printf("Enter the number of vertices : ");
    scanf("%d",&v);
    printf("Eneter the type of graph\n1.Undirected\n2.Directed\n");
    scanf("%d",&graphType);
    if(graphType==1)
        maxEdges=(v*(v-1))/2;
    else 
        maxEdges=v*(v-1);
    int i=0,j=0,source=0,destination=0;
    for(i=1;i<=maxEdges;i++)
    {
        printf("Enter edge %d : ",i);
        scanf("%d %d",&source,&destination);
        if(source==-1 && destination==-1)
            break;
        if(source<0||source>=v||destination<0||destination>=v)
        {
            printf("Invalid\n");
            continue;
        }
        else
        {
            adjacneyMatrix[source][destination]=1;
            if(graphType==1)
            {
                adjacneyMatrix[destination][source]=1;
            }
        }
    }
    printf("The adjancey matrix is : ");
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            printf("%d ",adjacneyMatrix[i][j]);
        
        printf("\n");
    }
}
int main()
{
    createGraph();
    return 0;
}