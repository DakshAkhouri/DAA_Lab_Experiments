#include <stdio.h>

int main() {
    char name[] = "Daksh Akhouri";
    int i = 1;

    printf("Name: %s\n", name);

    while (i < 13) {
        printf("%c\n", name[i]);
        i = i * 2;
    }

    return 0;
}