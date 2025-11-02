#include <stdio.h>

int main() {
    float x, y;

    // Input coordinates
    printf("Enter the coordinates (x y): ");
    scanf("%f %f", &x, &y);

    // Determine the position of the point
    if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the FIRST Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the SECOND Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the THIRD Quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the FOURTH Quadrant.\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point (%.2f, %.2f) lies at the ORIGIN.\n", x, y);
    else if (x == 0)
        printf("The point (%.2f, %.2f) lies on the Y-AXIS.\n", x, y);
    else if (y == 0)
        printf("The point (%.2f, %.2f) lies on the X-AXIS.\n", x, y);

    return 0;
}
