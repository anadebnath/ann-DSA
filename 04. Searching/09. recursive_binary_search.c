/*
 * Program No.: 9
 * Program Name: Recursive binary search
 * Date: 10.08.26
 * Aim: Perform recursive binary search on a sorted array.
 */
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        }
        return binarySearch(arr, mid + 1, right, target);
    }
    return -1;
}

int main() {
    int arr[100], n, target, result;
    printf("Enter number of element: ");
    scanf("%d", &n);
    printf("Enter %d sorted element: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &target);
    result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Element found at pos: %d\n", result + 1);
    } else {
        printf("Element Not found\n");
    }
    return 0;
}
/*
 * Output:
 * Enter number of elements: 5
 * Enter 5 sorted elements: 10 20 30 40 50
 * Enter element to search: 30
 * Element found at position: 2
 */
