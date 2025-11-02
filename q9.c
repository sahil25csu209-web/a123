#include <stdio.h>

int main() {
    int scores[100];   // Array to store scores
    int n, i;
    int found = -1;    // Flag to store index if 99 is found

    // Input: number of elements
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    // Input: scores array
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Linear search for first occurrence of 99
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            found = i;  // store index
            break;      // stop after finding first occurrence
        }
    }

    // Output the result
    if (found != -1)
        printf("\nThe first occurrence of score 99 is at position %d (index %d).\n", found + 1, found);
    else
        printf("\nScore 99 was not found in the array.\n");

    return 0;
}
