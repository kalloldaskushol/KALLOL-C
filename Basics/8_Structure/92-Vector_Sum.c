#include<stdio.h>
struct Vector{
    int x;
    int y;
};

void calsum(struct Vector v1,struct Vector v2, struct Vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is %d \n", sum.x);
    printf("Sum of y is %d \n", sum.y);
}
int main(){

    
struct Vector v1 = {5,10};
struct Vector v2 = {3,7};
struct Vector sum = {0}; // initial sum of x & y is now 0

calsum(v1,v2,sum);

return 0;
}