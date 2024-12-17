#include<stdio.h>

int main(){

    int n,sum=0;
    
    printf("Enter the number:");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("Sum of array: %d",sum);

return 0;
}           