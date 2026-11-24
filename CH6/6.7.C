#include <stdio.h>

// Function declarations
void square(int n);        // Call by value
void square_ptr(int *n);  // Call by reference (pointer)

int main() {
    int no = 4;

    square(no);
    printf("number after square() = %d\n", no);

    square_ptr(&no);
    printf("number after square_ptr() = %d\n", no);

    return 0;
}

// Call by value
void square(int n) {
    n = n * n;
    printf("square (value) = %d\n", n);
}

// Call by reference using pointer
void square_ptr(int *n) {
    *n = (*n) * (*n);
    printf("square (pointer) = %d\n", *n);
}