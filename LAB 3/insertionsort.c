#include <stdio.h>
#include <time.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    insertionSort(arr, n);

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nCPU TIME USED = %f seconds\n", cpu_time_used);

    return 0;
}