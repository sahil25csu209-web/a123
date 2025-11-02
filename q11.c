#include <stdio.h>

int main() {
    int scores[100];      // Original array of scores
    int even_array[100];  // To store even numbers
    int odd_array[100];   // To store odd numbers
    int n, i;
    int even_count = 0, odd_count = 0; // Counters for both arrays

    // Step 1: Input number of elements
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    // Step 2: Input the scores
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Step 3: Traverse the array and separate even and odd numbers
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

    // Step 4: Display the results
    printf("\nEven Scores:\n");
    if (even_count == 0)
        printf("None\n");
    else
        for (i = 0; i < even_count; i++)
            printf("%d ", even_array[i]);

    printf("\n\nOdd Scores:\n");
    if (odd_count == 0)
        printf("None\n");
    else
        for (i = 0; i < odd_count; i++)
            printf("%d ", odd_array[i]);

    printf("\n");

    return 0;
}
