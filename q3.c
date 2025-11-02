#include <stdio.h>

int subtract(int a, int b) {
    
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    int result = subtract(num1, num2);
    printf("\nResult (without using '-' operator): %d\n", result);

    return 0;
}

