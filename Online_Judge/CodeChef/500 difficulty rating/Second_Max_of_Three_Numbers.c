#include <stdio.h>

int main()
{

    int N, X, Y, Z;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
    scanf("%d %d %d", &X, &Y, &Z);
        if ((X >= Y && X <= Z) || (X >= Z && X <= Y))
            printf("%d\n", X);
        else if ((Y >= X) && (Y <= Z) || (Y >= Z && Y <= X))
            printf("%d\n", Y);
        else
            printf("%d\n", Z);
    }
    return 0;
}