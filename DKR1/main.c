#include <stdio.h>
#include <stdlib.h>

int pow(int a, int N);

int main()
{
    int N, a;
    double Sum = 0;

    printf("\n enter N >= 1: ");
    scanf("%d", &N);

    printf("\n A: ");
    scanf("%d", &a);

    for (int n = 1; n <= N; n++)
    {
        if ((a+pow(-1,n)*n))
        {
            Sum += (double)pow(-1, n) * pow(a, n) / (a+pow(-1,n)*n);
        }
    }
    Sum++;
    printf("\n\n result = %lf", Sum);
    return 0;
}
int pow(int a, int N)
{
    int value=1;
    if(N==0)
    {
        return 1;
    }
    else if (N==1)
    {
        return a;
    }
    else
    {
        for(int i=0; i<N; i++)
        {
            value*=a;
        }
    }
    return value;
}
