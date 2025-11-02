#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int peak_found = 0;  // Flag to check if a peak is found

    // Step 1: Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Traverse array to find a peak
    for (i = 0; i < n; i++) {
        if (i == 0 && arr[i] >= arr[i + 1]) {
            // First element (compare only with right neighbor)
            printf("\nPeak element found: %d at position %d\n", arr[i], i + 1);
            peak_found = 1;
            break;
        } else if (i == n - 1 && arr[i] >= arr[i - 1]) {
            // Last element (compare only with left neighbor)
            printf("\nPeak element found: %d at position %d\n", arr[i], i + 1);
            peak_found = 1;
            break;
        } else if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            // Middle elements (compare both neighbors)
            printf("\nPeak element found: %d at position %d\n", arr[i], i + 1);
            peak_found = 1;
            break;
        }
    }

    if (!peak_found) {
        printf("\nNo peak element found in the array.\n");
    }

    return 0;
}
