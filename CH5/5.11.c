#include<stdio.h>

float percentage(int math, int bio, int eng);

int main (){
    int m,b,e;

    printf("Enter math marks : ");
    scanf("%d", &m);

    printf("Enter bio marks : ");
    scanf("%d", &b);

    printf("Enter eng marks : ");
    scanf("%d", &e);

    printf("Percentage is : %.2f", percentage(m,b,e));

    return 0;
}

float percentage(int math, int bio, int eng){
    return ((math + bio + eng) / 3.0);  // or use proper % formula below
}