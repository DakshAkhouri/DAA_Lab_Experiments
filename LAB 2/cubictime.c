#include <stdio.h>

int main() {
    char name[] = "Daksh Akhouri";
    int i, j, k;

    for (i = 0; i < 13; i++) {
        for (j = 0; j < 13; j++) {
            for (k = 0; k < 13; k++) {
                printf("%s\n", name);
            }
        }
    }

    return 0;
}