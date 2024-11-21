#include <stdio.h>

int main() {
    int choice;
    float area, base, height, radius, length, breadth;

    printf("Choose a shape:\n1. Circle\n2. Triangle\n3. Square\n4. Rectangle\n5. Parallelogram\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            break;
        case 2:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            break;
        case 3:
            printf("Enter side: ");
            scanf("%f", &length);
            area = length * length;
            break;
        case 4:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            break;
        case 5:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = base * height;
            break;
        default:
            printf("Invalid choice\n");
            return 0;
    }

    printf("Area: %.2f\n", area);
    return 0;
}
