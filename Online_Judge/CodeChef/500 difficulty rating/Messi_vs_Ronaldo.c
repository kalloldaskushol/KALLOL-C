#include <stdio.h>

int main()
{
    int A, B, X, Y;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &X, &Y);
    if (((A * 2) + B) == ((X * 2) + Y))
        printf("Equal\n");
    else if (((A * 2) + B) > ((X * 2) + Y))
        printf("Messi\n");
    else if(((A*2)+B) < ((X*2)+Y)) printf("Ronaldo\n");
}
