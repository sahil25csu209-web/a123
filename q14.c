#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // divisible by a number other than 1 and itself
        }
    }
    return true; // number is prime
}

int main() {
    int arr[100];
    int n, i;
    int prime_count = 0;

    // Step 1: Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Traverse array and count prime numbers
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            prime_count++;
        }
    }

    // Step 4: Display the result
    printf("\nNumber of prime numbers in the array: %d\n", prime_count);

    return 0;
}
