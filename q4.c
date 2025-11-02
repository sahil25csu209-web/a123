#include <stdio.h>

/* Method 1: Using a Temporary Variable */
void swapWithTemp(int a, int b) {
    int temp;
    printf("\n--- Method 1: Using Temporary Variable ---\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:  a = %d, b = %d\n", a, b);
}

/* Method 2: Using Arithmetic Operators (+ and -) */
void swapWithArithmetic(int a, int b) {
    printf("\n--- Method 2: Using Arithmetic Operators ---\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:  a = %d, b = %d\n", a, b);
}

/* Method 3: Using Bitwise XOR Operator */
void swapWithXOR(int a, int b) {
    printf("\n--- Method 3: Using Bitwise XOR ---\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:  a = %d, b = %d\n", a, b);
}

/* Method 4: Using Pointers (Address Manipulation) */
void swapWithPointers(int *a, int *b) {
    printf("\n--- Method 4: Using Pointers ---\n");
    printf("Before swapping: a = %d, b = %d\n", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("After swapping:  a = %d, b = %d\n", *a, *b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Method 1: Temporary Variable
    swapWithTemp(num1, num2);

    // Method 2: Arithmetic Operators
    swapWithArithmetic(num1, num2);

    // Method 3: Bitwise XOR
    swapWithXOR(num1, num2);

    // Method 4: Pointer Manipulation
    swapWithPointers(&num1, &num2);

    return 0;
}
