#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int **A;
    int res = 1;
    A=(int**)calloc(3, sizeof(int*));

    for (int i = 0; i < 3; i++)
    {
        A[i]=(int*)calloc(3, sizeof(int));
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", A[i][j]);
            if(i==j) 
            {
                res *= A[i][j];
            }
        }
        printf("\n");
    }

    printf("res=%d", res);

    free(A);
    A=NULL;
    for (int i = 0; i < 3; i++)
    {
        free(A[i]);
        A[i]=NULL;
    }

    return 0;
}