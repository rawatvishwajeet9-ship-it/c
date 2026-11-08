//nested if else  if ke ander if 
#include<stdio.h>
int main () {
    int num;
    printf("enter a number");
    scanf("%d",&num);

    if(num>=0){
    printf("number is positive");
    if (num%2==0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
    }
    else{
        printf("number is negative");
    }

}