#include <stdio.h>
#include <math.h>

// Function to convert Binary to Decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;      // Get the last digit (0 or 1)
        decimal += remainder * base;  // Multiply by its positional value
        binary /= 10;                 // Remove last digit
        base *= 2;                    // Move to the next binary position
    }

    return decimal;
}

// Function to convert Decimal to Binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;

    while (decimal != 0) {
        remainder = decimal % 2;      // Get the remainder (binary digit)
        decimal /= 2;                 // Divide by 2 for next bit
        binary += remainder * i;      // Place digit in proper position
        i *= 10;
    }

    return binary;
}

int main() {
    int choice;
    long long binaryInput;
    int decimalInput;

    printf("====== Binary ↔ Decimal Converter ======\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter a binary number: ");
            scanf("%lld", &binaryInput);
            printf("Decimal equivalent: %d\n", binaryToDecimal(binaryInput));
            break;

        case 2:
            printf("\nEnter a decimal number: ");
            scanf("%d", &decimalInput);
            printf("Binary equivalent: %lld\n", decimalToBinary(decimalInput));
            break;

        default:
            printf("\nInvalid choice! Please run the program again.\n");
    }

    return 0;
}
