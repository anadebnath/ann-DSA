/*
 * Program No.: 17
 * Program Name: Insertion sort
 * Date: 24.08.26
 * Aim: Sort an array using insertion sort.
 */
#include <stdio.h>

void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step -1;
        while (j>= 0 && key < array[j]) {
              array[j+1] = array[j];
              --j;
        }
        array[j+1] = key;
    }
}
int main() {
    int data[] = {6, 4, 7, 8, 1, 9, 5};
    int size = sizeof(data) / sizeof(data[0]);
    
    insertionSort(data, size);
    
    printf("Sorted Array\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
/*
 * Output:
 * Enter number of elements: 7
 * Enter 7 elements: 6 4 7 8 1 9 5
 * Sorted Array
 * 1 4 5 6 7 8 9
 */
