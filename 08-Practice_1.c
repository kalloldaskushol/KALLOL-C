#include<stdio.h>

int main(){

    //WAP to calculate area of a rectangle
    int length, breadth;
    printf("Enter length:");
    scanf("%d", &length);

    printf("Enter breadth:");
    scanf("%d", &breadth);

    int area = length * breadth;

    printf("The area of the rectangle is = %d sq unit\n",area);

    // WAP to find the area of a circle & Volume of a cylinder which has the same redius
    int redius, height;
    printf("Enter the redius of the circle:");
    scanf("%d", &redius);

    printf("Enter the height of the Cylinder:");
    scanf("%d", &height);

    printf("The Area of the circle is = %f\n",3.1416*redius*redius);
    printf("The volume of the Cylinder is = %f\n",3.1416*redius*redius*height);

    //WAP to convert Calsius to Fahrenheit
    float c = 31.03,f;
    f = (9.0/5.0)*c + 32;

    printf("Fahrenheit = %f °F\n",f);

    // WAP to find simple interest {(p*r*t)/100}

    float p = 31.03 ;
    int r = 5 ;
    int t = 4 ;
    printf("Simple interest = %f \n",(p*r*t)/100);

return 0;
}