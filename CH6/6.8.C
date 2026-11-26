#include <stdio.h>

void calculate(int a, int b, int *sum, int *product, float *avg);

int main() {
    int x = 10, y = 20;
    int sum, product;
    float avg;

    calculate(x, y, &sum, &product, &avg);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Average = %.2f\n", avg);

    return 0;
}

void calculate(int a, int b, int *sum, int *product, float *avg) {
    *sum = a + b;
    *product = a * b;
    *avg = (*sum) / 2.0;
}
//pointer is used in funtion to return many thing 
//normal funtion can only return a single vlaue 
//so we use pointer to return 
//whne we want multiple value in return so we use pointer
