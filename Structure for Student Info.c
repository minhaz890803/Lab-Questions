#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf(" %[^\n]", s.name); // reads string with spaces
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Info:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

