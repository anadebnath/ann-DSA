/*
 * Program No.: 6
 * Program Name: Deletion in an array
 * Date: 10.08.26
 * Aim: Delete an element from a specified position in an array.
 */
#include <stdio.h>
int delete (int arr[], int n, int pos) {
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    return n;
}
int main () {
    int arr[100], n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    n = delete(arr, n, pos);
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
 * Output:
 * Enter number of elements: Enter 5 elements: Enter position to delete (0 to 4): Array after deletion: 10 20 40 50
 */
