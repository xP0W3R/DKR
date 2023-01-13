#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>

void Fill_matrix(int **Matrix, int Size);
void Print_matrix(int **Matrix, int Size);
int Prod_matrix(int **Matrix, int Size);

int main()
{
    int R;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    printf("\nРозмiр квадртноi матрицi: ");
    scanf("%d",&R);

    int **A = NULL;
    A=(int) malloc(R * sizeof(int));
    for(int i = 0; i < R; i++)
    {
        A[i]=(int*) malloc(R * sizeof(int));
    }
    if(A == NULL)
    {
        printf("Memory has not been allocated");
        exit(0);
    }

    Fill_matrix(A, R);

    Print_matrix(A, R);

    printf("Добуток елементів головної діагоналі=%d", Prod_matrix(A, R));
    return 0;
}
void Fill_matrix(int **Matrix, int Size)
{

    printf("Заповніть квадратну матрицю:\n");

    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&Matrix[i][j]);
        }
    }
}
void Print_matrix(int **Matrix, int Size)
{

    for (int i=0; i<Size; i++)
    {
        for (int j=0; j<Size; j++)
        {
            printf("%3d ", Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}
int Prod_matrix(int **Matrix, int Size)
{
    int prod = 1;
    for (int i = 0; i < Size; i++) prod*= Matrix[i][i];
    return prod;
}

