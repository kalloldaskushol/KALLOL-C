#include<stdio.h>
void circledia(float x){
    printf("Diameter = %.2f \n", 2*x);}
void circlecirc(float x){
    printf("Circumference = %.2f\n", 2*3.1416*x);
}
void circleArea(float x){
    printf("Area = %.2f \n", 3.1416*x*x);
}
int main(){
    float x;
    printf("Input any number:");
    scanf("%f",&x);
    circledia(x);
    circlecirc(x);
    circleArea(x);

return 0;
}