#include<stdio.h>
//In C, when you declare an array without specifying its size, it means that the size of the array is implicitly determined based on the number of elements you provide during initialization.
int main(){

    int arr[5] = {1,2,3,4,5};

    printf("%d\n", arr[3]);
    printf("%d\n", arr[1]);

    arr[4] = 200;
    printf("Changed value of the 4th index: %d\n", arr[4]);

    float brr[2]= {1.2, 5.6};
    printf("%d\n", brr[1]);

    char crr[4] = {'a','b','c','d'};
    printf("%c\n", crr[3]);


    int size=10,b[size];//Right

    // num[4] refers the 5th element of num array
    
    // in array memory is allocated one by one
    printf(" adress of the array:%p\n", &arr[2]);
    printf(" adress of the array:%p\n", &arr[3]);
    // diff 4bytes

    //Taking multiple input for array

    for(int i = 0; i<=4; i++) scanf("%d", &arr[i]);
    for(int i = 0; i<=4; i++) printf("%d ",arr[i]);
// loops starts from 0 and goes n-1

/*
// What is the difference between the 5's in these two expressions:

int num[5];
num[5] = 11;

first is array size and second is particular element.
*/

/*
What would happen if you assign a value to an element of an array whose subscript exceeds the size of the array:

if array size is 5 and you assign a value to num[5] = 11; it will give you an error.
*/
return 0;
}