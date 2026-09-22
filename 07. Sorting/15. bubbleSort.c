/*
 * Program No.: 15
 * Program Name: Bubble sort
 * Date: 24.08.26
 * Aim: Sort an array using bubble sort.
 */
#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int main() {
    int data[] = {6, 4, 7, 8, 1, 9, 5};
    int size = sizeof(data) / sizeof(data[0]);
    
    bubbleSort(data, size);
    
    printf("Sorted Array\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
/*
 * output:
 * Enter number of elements: 7
 * Enter 7 elements: 6 4 7 8 1 9 5
 * Sorted Array
 * 1 4 5 6 7 8 9
 */
