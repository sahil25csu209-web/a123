#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos;

    // Step 1: Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Display original array
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 4: Choose deletion position
    printf("\n\nFrom where do you want to delete the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    scanf("%d", &pos);

    // Step 5: Perform deletion
    if (n == 0) {
        printf("Array is empty. Nothing to delete.\n");
        return 0;
    }

    if (pos == 1) {
        // Delete from front
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // decrease array size
    } else if (pos == 2) {
        // Delete from middle
        int mid = n / 2; // middle index
        for (i = mid; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else if (pos == 3) {
        // Delete from end
        n--; // just decrease size
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    // Step 6: Display updated array
    printf("\nArray after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
