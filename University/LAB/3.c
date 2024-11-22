#include<stdio.h>
void maxmin(int x, int y){
    if(x>y){
        printf("Maximum = %d",x);
    }
    else
    printf("minimun = %d", y);
}
int main(){
    int x,y;
    printf("Input any number1:");
    scanf("%d",&x);
    printf("Input any number2:");
    scanf("%d",&y);
    maxmin(x,y);

return 0;
}