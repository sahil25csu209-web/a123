#include <stdio.h>

int main() {
    int n;                  // number of terms
    int first = 0, second = 1, next; // starting values

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Series up to %d terms:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", first);     // print the current term
        next = first + second;    // calculate next term
        first = second;           // move second to first
        second = next;            // move next to second
    }

    printf("\n");
    return 0;
}

