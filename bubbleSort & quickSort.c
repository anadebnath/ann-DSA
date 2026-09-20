#include <stdio.h>

int main() {
    int a[10] = {64, 25, 12, 22, 11, 90, 34, 5, 78, 43};
    int n = 10;
    for (int j = 0; j < n - 1; j++) {
        if (a[j] > a[j + 1]) {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }

    printf("Intermediate array after 1 Bubble Sort pass:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    printf("\n\nFinal array after Selection Sort:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}