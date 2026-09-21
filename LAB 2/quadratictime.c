#include <stdio.h>

int main() {
    char name[] = "Daksh Akhouri";
    int i, j;

    for (i = 0; i < 13; i++) {
        for (j = 0; j < 13; j++) {
            printf("%s\n", name);
        }
    }

    return 0;
}