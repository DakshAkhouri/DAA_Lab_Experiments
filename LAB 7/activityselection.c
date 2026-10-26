#include <stdio.h>

int main() {
    int n;

    printf("Enter number of activities: ");
    scanf("%d", &n);

    int start[n], finish[n];

    printf("Enter start and finish time of activities:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &start[i], &finish[i]);
    }

    // Sort activities according to finish time
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (finish[i] > finish[j]) {
                int temp;

                temp = finish[i];
                finish[i] = finish[j];
                finish[j] = temp;

                temp = start[i];
                start[i] = start[j];
                start[j] = temp;
            }
        }
    }

    // First activity is always selected
    printf("Selected Activities:\n");
    printf("(%d, %d)\n", start[0], finish[0]);

    int last = 0;

    // Select non-overlapping activities
    for (int i = 1; i < n; i++) {
        if (start[i] >= finish[last]) {
            printf("(%d, %d)\n", start[i], finish[i]);
            last = i;
        }
    }

    return 0;
}