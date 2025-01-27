#include<stdio.h>
// create a stucture to store complex numbers using arrow operator.
struct complex {
    int real, img;
};

int main(){

    struct complex num1 = {5,8};
    struct complex *ptr = &num1;
    printf("real part:%d\n", ptr->real);
    printf("img part:%d\n", ptr->img);

return 0;
}