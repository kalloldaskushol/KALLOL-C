#include <stdio.h>

int main()
{

    int factorial = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("%d",factorial);
    return 0;
}