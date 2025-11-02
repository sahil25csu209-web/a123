#include <stdio.h>

// Function to find HCF using recursion
int findHCF(int a, int b) {
    // Base case: if second number becomes 0, the first number is the HCF
    if (b == 0)
        return a;
    
    // Recursive step: call the function again with (b, a % b)
    return findHCF(b, a % b);
}

int main() {
    int num1, num2, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < 0)
        num1 = -num1;
    if (num2 < 0)
        num2 = -num2;
    hcf = findHCF(num1, num2);
    printf("The HCF (Highest Common Factor) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
