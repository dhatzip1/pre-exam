#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
    int **p;
    int i;
    p=malloc(5*sizeof(int *));
    for( i=0;i<=4;i++)
    {
        p[i]=malloc(5*(sizeof(int)));
    }
    for(i=0;i<=4;i++)
    {
        for (int j=0; j<=4;j++)
        {
            p[i][j]=i*j;
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
    for( i=0;i<=4;i++)
    {
        free(p[i]);
    }
    free (p);
}