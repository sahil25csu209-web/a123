#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nBinary Pyramid Pattern:\n");

    for (int i = 1; i <= rows; i++) {
        // --- Left Half ---
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);  // alternates between 0 and 1
        }

        printf(" ");  // space between two halves

        // --- Right Half ---
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
