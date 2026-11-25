#include <stdio.h>

int main() {
    char str[1000], find, replace;
    int count = 0;

    printf("Enter string (ASCII only): ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((unsigned char)str[i] > 127) {
            printf("Error: Cyrillic is not allowed!\n");
            return 1;
        }
        if (str[i] == '\n') {
            str[i] = '\0';
        }
    }

    printf("Find char: ");
    find = getchar();
    while (getchar() != '\n');

    printf("Replace with: ");
    replace = getchar();


    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == find) {
            str[i] = replace;
            count++;
        }
    }

    printf("\nResult: %s\nReplacements: %d\n", str, count);
    return 0;
}