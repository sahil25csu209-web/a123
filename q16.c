#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, element;

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

    // Step 4: Choose insertion position
    printf("\n\nWhere do you want to insert the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    scanf("%d", &pos);

    // Step 5: Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Step 6: Perform insertion
    if (pos == 1) {
        // Insert at front
        for (i = n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = element;
        n++;
    } else if (pos == 2) {
        // Insert at middle
        int mid = n / 2; // middle index
        for (i = n; i > mid; i--) {
            arr[i] = arr[i - 1];
        }
        arr[mid] = element;
        n++;
    } else if (pos == 3) {
        // Insert at end
        arr[n] = element;
        n++;
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    // Step 7: Display updated array
    printf("\nArray after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
