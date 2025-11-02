#include <stdio.h>

int main() {
    int scores[100];  // Array to store scores
    int n, i;
    int max, min;     // Variables to store maximum and minimum

    // Step 1: Input the number of scores
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Step 2: Input the scores
    printf("Enter the scores of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Step 3: Initialize max and min with the first element
    max = scores[0];
    min = scores[0];

    // Step 4: Traverse the array and find max and min
    for (i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];  // Update max
        }
        if (scores[i] < min) {
            min = scores[i];  // Update min
        }
    }

    // Step 5: Display the results
    printf("\nMaximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}
