#include <stdio.h>

void printName(int n) {
    if (n == 0) {
        printf("Daksh Akhouri\n");
        return;
    }

    printName(n - 1);
    printName(n - 1);
}

int main() {
    int n = 4;

    printName(n);

    return 0;
}