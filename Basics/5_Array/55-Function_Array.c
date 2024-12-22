#include<stdio.h>
void fun(int arr[]){// size is not mentioned
    arr[0] = 100;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d\n", arr[0]); // output 1

    fun(arr);   //only array name is passed

    printf("%d\n", arr[0]); // output 100

    /*
    array is passed by reference

    when you pass an array as an argumment-> the address of the first element of the array is passed only bcz the rest is linked with the first element. 
    */
return 0;
}