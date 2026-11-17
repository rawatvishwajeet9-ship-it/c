// WAP to calculate area of square, circle, rectangle
#include<stdio.h>

float square(float side);
float circle(float rad);
float rectangular(float a, float b);

int main(){
    float side, rad, a, b;

    printf("Enter side: ");
    scanf("%f", &side);
    printf("Area of Square = %f\n", square(side));

    printf("Enter radius: ");
    scanf("%f", &rad);
    printf("Area of Circle = %f\n", circle(rad));

    printf("Enter length: ");
    scanf("%f", &a);
    printf("Enter breadth: ");
    scanf("%f", &b);
    printf("Area of Rectangle = %f\n", rectangular(a, b));

    return 0;
}

float square(float side){
    return side * side;
}

float circle(float rad){
    return 3.14 * rad * rad;
}

float rectangular(float a, float b){
    return a * b;
}