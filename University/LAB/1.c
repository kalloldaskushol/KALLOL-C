#include<stdio.h>
int x;
void cube(int x){
    printf("Cube of %d = %d", x, x*x*x);
}
int main(){
    
    printf("Input any number:");
    scanf("%d",&x);
    cube(x);

return 0;
}