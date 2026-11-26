#include <stdio.h>

int main() {
    int marks[3];

    printf("Enter marks of math: ");
    scanf("%d", &marks[0]);

    printf("Enter marks of eng: ");
    scanf("%d", &marks[1]);

    printf("Enter marks of bio: ");
    scanf("%d", &marks[2]);

    printf("Math = %d, Eng = %d, Bio = %d\n",
           marks[0], marks[1], marks[2]);

    return 0;
}