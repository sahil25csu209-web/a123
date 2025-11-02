#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    int sum = 0;

    // Step 1: Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Step 2: Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Step 3: Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // Step 4: Check if sum equals original number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is NOT an Armstrong number.\n", originalNum);
    }

    return 0;
}
