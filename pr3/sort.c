#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void writeArray(int *arr);
void showArray(int *arr);

int main()
{
    system("cls");
    int A[10];
    int i, tmp, n;
    writeArray(A);
    showArray(A);
    printf("\n");
    n=9;
    while (n!=0)
    {
        for (i = 0; i<n; i++)
        {
            //printf("%d\t %d\n", A[i], A[i + 1]);
            if (A[i] > A[i + 1])
            {
                tmp = A[i + 1];
                A[i + 1] = A[i];
                A[i] = tmp;
                //printf("%d\t %d\t %d\n", A[i], A[i + 1], tmp);
            }
            // showArray(A);
            // printf("\n");
        }
        n--;
    }
    
    showArray(A);
    printf("\n");

    getch();

    return 0;
}

void writeArray(int *arr)
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    return;
}

void showArray(int *arr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    return;
}
