#include<stdio.h>

int main(){

    //Given an array of marks of students, if the mark of any student is less than 35 print its roll number.[roll number is index nummber]

    int arr[5];

    for(int i=0;i<=4;i++){
        printf("Enter the marks of roll no.%d student:",i);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=4;i++){
        if(arr[i]<35) printf("oppos:%dn",i);
    }

return 0;
}