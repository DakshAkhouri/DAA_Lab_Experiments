#include <stdio.h>

void printName(int n) {
    int i;

    if (n == 0) {
        printf("Daksh Akhouri\n");
        return;
    }

    for (i = 0; i < n; i++) {
        printName(n - 1);
    }
}

int main() {
    int n = 4;

    printName(n);

    return 0;
}