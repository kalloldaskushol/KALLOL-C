
// // II.

// #include <stdio.h>
// void calculateSequence(int n);

// void calculateSequence(int n)
// {
//     if (n <= 0) return;
//     printf("%d ", n);
//     calculateSequence(n - 2);
//     printf("%d ", n * 2);
// }

// int main()
// {
//     calculateSequence(5);
//     return 0;
// }


// // III.

// #include <stdio.h>
// void processEven(int n);
// void processOdd(int n);

// void processEven(int n)
// {
//     if (n <= 0) return;
//     printf("E%d ", n); // Even
//     processOdd(n - 1);
//     printf("E%d ", n);
// }

// void processOdd(int n)
// {
//     if (n <= 0) return;
//     printf("O%d ", n); // Odd
//     processEven(n / 2);
//     printf("O%d ", n);
// }

// int main()
// {
//     processEven(6);
//     return 0;
// }


// // IV.

// #include <stdio.h>
// void incrementPrint(int n);

// void incrementPrint(int n)
// {
//     if (n > 10) return;
//     printf("I%d ", n); // Increment
//     incrementPrint(n + 2);
//     printf("I%d ", n + 1);
// }

// int main()
// {
//     incrementPrint(1);
//     return 0;
// }
