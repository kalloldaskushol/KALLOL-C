// Question 1
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("%d\n", *ptr); //10

    return 0;
}

// Question 2
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *p = &a;

    printf("%d\n", *p); //5

    p = &b;

    printf("%d\n", *p);//10

    return 0;
}

// Question 3
#include <stdio.h>

int main() {
    int x = 20;
    int *ptr = &x;

    *ptr = 50;

    printf("%d\n", x);

    return 0; //50
}

// Question 4
#include <stdio.h>

int main() {
    int x = 15, y = 25;
    int *p = &x, *q = &y;

    printf("%d %d\n", *p, *q); // 15 25

    p = q;

    printf("%d %d\n", *p, *q); //25 25

    return 0;
}

// Question 5
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); // 10 20 30

}
