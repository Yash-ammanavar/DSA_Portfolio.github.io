#include <stdio.h>
#include <stdlib.h>

int min(int dist[],int visited[])
{
    int a=9999,b,c;
    for(b=0;b<6;b++)
        if((dist[b]<a) && (visited[b]==0))
              {
                  a = dist[b];
                  c = b;
              }
    return c;
}

int main()
{
   int m = 9999,i,j,u,k,dist[6],path[6],s,z,p,d,p1[15];
    int M[6][6] = { {0,15,10,m,45,m},
                    {m,0,15,m,20,m},
                    {20,m,0,20,m,m},
                    {m,10,m,0,35,m},
                    {m,m,m,30,0,m},
                    {m,m,m,4,m,0}  };

  int  visited[6] = {0,0,0,0,0,0};
    printf("Enter Source\n");
    scanf("%d",&s);
    visited[s] = 1;

    for(i=0;i<6;i++)
    {
        dist[i] = M[s][i];
        path[i] = s;
    }

    for(j=0;j<6;j++)
    {
        u = min(dist,visited);
        k = dist[u];
        visited[u] = 1;

        for(i=0;i<6;i++)
        {
            if((visited[i]==0) && ((M[u][i]+k) < dist[i]) )
            {
                dist[i] = M[u][i]+k;
                path[i] = u;
            }
        }
    }

    for(j=0;j<6;j++)
    {
        printf("From %d to %d: %d\n",s,j,dist[j]);
    }

    printf("Enter destination\n\n");
    scanf("%d",&d);
    int d_=d;
    i =0;
    p1[i]=d;
    while(p!=s)
    {
        p = path[d];
        d = p;
        i++;
        p1[i] = p;
    }

    printf("Shortest path from %d to %d is %d and is as follows:\n",s,d_,dist[d_]);
    printf("%d",p1[i]);
    for(j=i-1;j>=0;j--)
    {
        printf("--->%d",p1[j]);
    }
return 0;
}
