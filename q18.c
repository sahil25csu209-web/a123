#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j;
    int found = 0;

    // Step 1: Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Check for duplicates
    printf("\nDuplicate elements: ");
    for (i = 0; i < n; i++) {
        // Check if element has appeared before
        int isFirstOccurrence = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isFirstOccurrence = 0;
                break;
            }
        }

        // Count frequency of current element
        if (isFirstOccurrence) {
            int count = 0;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count > 0) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }

    // Step 4: If no duplicates found, print -1
    if (!found) {
        printf("-1");
    }

    printf("\n");
    return 0;
}
