#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    int number, originalNumber, remainder, result = 0, digits = 0;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;  // Save the original number to compare later

    // Step 1: Count number of digits
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Step 2: Calculate the sum of each digit raised to the power of total digits
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;                  // Get last digit
        result += pow(remainder, digits);       // Add (digit ^ digits) to result
        temp /= 10;                             // Remove last digit
    }

    // Step 3: Check if result matches the original number
    if (result == originalNumber)
        printf("%d is an Armstrong number.\n", originalNumber);
    else
        printf("%d is not an Armstrong number.\n", originalNumber);

    return 0;
}
//end1
