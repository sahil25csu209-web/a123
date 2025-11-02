#include <stdio.h>

int main() {
    int arr[100];
    int n, i, last;

    // Step 1: Input number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Store the last element
    last = arr[n - 1];

    // Step 4: Shift elements to the right by one position
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 5: Place the last element at the first position
    arr[0] = last;

    // Step 6: Display the rotated array
    printf("\nArray after clockwise rotation by one position:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
