#include <stdio.h>

struct Item {
    int value;
    int weight;
    float ratio;
};

int main() {
    int n, capacity;

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item item[n];

    printf("Enter value and weight of each item:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &item[i].value, &item[i].weight);
        item[i].ratio = (float)item[i].value / item[i].weight;
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    // Sort items according to value/weight ratio
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (item[i].ratio < item[j].ratio) {
                struct Item temp = item[i];
                item[i] = item[j];
                item[j] = temp;
            }
        }
    }

    float maxValue = 0;

    // Greedy selection
    for (int i = 0; i < n; i++) {

        if (capacity >= item[i].weight) {
            capacity -= item[i].weight;
            maxValue += item[i].value;
        }
        else {
            maxValue += item[i].ratio * capacity;
            break;
        }
    }

    printf("Maximum value = %.2f\n", maxValue);

    return 0;
}