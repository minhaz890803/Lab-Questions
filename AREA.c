#include <stdio.h>

int main() {
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    printf("Area of the circle = %.2f\n", area);
    return 0;
}

