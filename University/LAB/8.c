#include<stdio.h>

int main(){
    int n,row,col;
    /*
 *   
 *  *  
 *  *  *   
 *  *  *  * 
*/    printf("Enter number of row:");
    scanf("%d", &n);

    for(int row=1; row<=n; row++){
        for(int space=1; space<=(n-row);space++){ //
            printf(" ");
        }
        for(int col=1;col<=row;col++){
            printf("%c ", col+64);
        }

        printf("\n");
    }

return 0;
}