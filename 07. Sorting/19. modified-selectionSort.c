/*
 * Program No.: 19
 * Program Name: Modified selection sort
 * Date: 24.08.26
 * Aim: Perform the modified selection-sort version recorded in the lab.
 */
#include <stdio.h>

void selectionSort(int array[], int size) {
     for (int step = 0; step < size - 1; step++) {
          int min_idx = step;
          int swapped = 0;
          int is_sorted = 1;
          for (int i = step + 1; i < size; i++) {
             if (array[i] < array[i - 1]) {
                is_sorted = 0;
             }
             if (array[i] < array[min_idx]) {
                 min_idx = i;
             }
    }
    if (min_idx != step) {
      int temp = array[min_idx];
      array[min_idx] = array[step];
      array[step] = temp;
      swapped = 1;
    }
    printf("Iteration %d: ", step + 1);
    for (int i = 0; i < size; i++) {
         printf("%d ", array[i]);
    }
    printf("\n");
    if (swapped == 0 && is_sorted) {
        break;
    }
  }
}
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int data[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
         scanf("%d", &data[i]);
    }
    selectionSort(data, size);
    printf("Sorted Array\n");
    for (int i = 0; i < size; ++i) {
         printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
/*
 * Sample run:
 * Enter number of elements: 5
 * Enter 5 elements: 2 1 3 4 5 
 * Iteration 1 : 1 2 3 4 5
 * Iteration 2 : 1 2 3 4 5
 * Sorted Array
 * 1 4 5 6 7 8 9
 */
