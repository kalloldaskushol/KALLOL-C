#include <stdio.h>
int main()
{
    int n; 
    printf("Enter the number:");
    scanf("%d",&n); 

    while(n % 10 == 0) { // n = 500
        n = n / 10;
    }
    // n = 5
    
    while(n > 0) {
        int last = n % 10;
        printf("%d",last);
        n = n / 10;
    }

}