#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];

    fptr = fopen("output.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write into file: ");
    scanf(" %[^\n]", data);

    fprintf(fptr, "%s", data);
    fclose(fptr);

    // Now read it back
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nData read from file:\n");
    while (fgets(data, 100, fptr) != NULL)
        printf("%s", data);

    fclose(fptr);
    return 0;
}

