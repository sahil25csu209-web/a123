#include <stdio.h>

int main() {
    int marks[100];     // Array to store student marks
    int n, i;
    int count = 0;      // To count how many students scored 99

    // Input: number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input: marks of students
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Process: Find who scored 99 and count them
    printf("\nStudents who scored 99:\n");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("→ Student %d\n", i + 1);
            count++;
        }
    }

    // Output results
    if (count > 0)
        printf("\nTotal number of students who scored 99: %d\n", count);
    else
        printf("\nNo student scored 99.\n");

    return 0;
}
