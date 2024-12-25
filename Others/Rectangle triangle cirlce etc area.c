#include <stdio.h>

int main() {
    int choice;
    float length, width, radius, area;

    // Display the menu and get the user's choice
    printf("Select a shape to calculate the area:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Calculate the area based on the user's choice
    switch (choice) {
        case 1: // Rectangle
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is %.2f\n", area);
            break;
        case 2: // Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("The area of the circle is %.2f\n", area);
            break;
        case 3: // Triangle
            printf("Enter the base of the triangle: ");
            scanf("%f", &length);
            printf("Enter the height of the triangle: ");
            scanf("%f", &width);
            area = 0.5 * length * width;
            printf("The area of the triangle is %.2f\n", area);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    return 0;
}
