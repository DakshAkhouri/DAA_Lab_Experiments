#include <stdio.h>

struct Activity {
    int start;
    int finish;
};

int main() {
    int n;

    printf("Enter number of activities: ");
    scanf("%d", &n);

    struct Activity a[n];

    printf("Enter start and finish time:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i].start, &a[i].finish);
    }

    // Sort activities according to start time
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].start > a[j].start) {
                struct Activity temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int roomEnd[n];
    int roomCount = 0;

    printf("\nActivity\tRoom\n");

    for (int i = 0; i < n; i++) {
        int assigned = 0;

        // Check existing rooms
        for (int j = 0; j < roomCount; j++) {
            if (a[i].start >= roomEnd[j]) {
                printf("(%d,%d)\t\t%d\n",
                       a[i].start, a[i].finish, j + 1);

                roomEnd[j] = a[i].finish;
                assigned = 1;
                break;
            }
        }

        // If no room is available, create a new room
        if (!assigned) {
            roomEnd[roomCount] = a[i].finish;

            printf("(%d,%d)\t\t%d\n",
                   a[i].start, a[i].finish, roomCount + 1);

            roomCount++;
        }
    }

    printf("\nMinimum number of rooms = %d\n", roomCount);

    return 0;
}