#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, i;

    printf("Enter a string: ");
    gets(str); // or use fgets

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        } else if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch == ' ')
            spaces++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Whitespaces: %d\n", spaces);

    return 0;
}

