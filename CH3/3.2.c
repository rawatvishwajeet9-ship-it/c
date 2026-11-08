#include<stdio.h>

int main() {

    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 99) {
        printf("Not valid\n");
    }

    else if (age >= 18) {
        printf("Adult\n");
    }

    else if (age > 10 && age < 18) {
        printf("Teenager\n");
    }

    else {
        printf("Child\n");
    }

    return 0;
}