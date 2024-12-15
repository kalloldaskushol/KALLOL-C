#include<stdio.h>

int main(){
// 1-
    // int num,sum=0;
    // printf("\nEnter number of elemment:");
    // scanf("%d", &num);

    // int a[num];

    // printf("Enter numbers to sum");
    // for (int i = 1; i <= num; i++)
    // {
    //     scanf("%d", &a[i]);
    //     sum = sum + a[i];
    // }
    // printf("The sum = %d",sum);
    
//2-

    //2.max and min in an array

//problem: 2

//     int n;
//     printf("\nEnter number of elemment:");
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0;i<n;i++) scanf("%d",&ar[i]);

//     int max=ar[0];
//     for(int i=0;i<n;i++)
//     {
//         if(max<ar[i])
//         {
//             max=ar[i];
//         }
//     }
//     int min=ar[0];
//     for(int i=0;i<n;i++)
//     {
//         if(min>ar[i])
//         {
//             min=ar[i];
//         }
//     }
//     printf("maximum element is: %d, minimum element is: = %d",max,min);
// }

// //3

//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int odd=0;
//     int even=0;
//     int a[n];
//     printf("Enter %d elements: ", n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//         if(a[i] % 2 == 0) even++;
//         else odd++;
//     }
//     printf("Even = %d, Odd = %d\n", even, odd);
//     return 0;
// }

// 4

    // int n;
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    // int a[n];
    // printf("Enter %d elements: ", n);
    // for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    // for(int i = n-1; i >= 0; i--) {//starts from last n = 5 last index = a[n-1]
    //     printf("%d", a[i]);
    // }
// 5 
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) 
    scanf("%d", &a[i]);
    int seacrch;
    printf("Enter the number to search: ");
    scanf("%d", &seacrch);
    for(int i = 0; i < n; i++) {
        if(a[i] == seacrch) {
            printf("found\n");
            break;
        }
        printf("not found");
    }



    return 0;
}
