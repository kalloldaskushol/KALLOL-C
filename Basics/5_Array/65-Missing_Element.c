#include <stdio.h>

int main()
{
    int arr[99] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81,82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,  95, 96, 97, 98, 99}; // 100 element holding array
    int n = 100;
    int sum = 0, totalSum;

    // Calculate the total sum of numbers from 1 to 100
    totalSum = n * (n + 1) / 2;

    // Calculate the sum of elements in the array
    for (int i = 0; i < 99; i++)
    {
        sum += arr[i];
    }

    // The missing number is the difference
    int missingNumber = totalSum - sum;

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
