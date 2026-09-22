
/*
 * Program No.: 12
 * Program Name: Linear search using pointers
 * Date: 17.08.26
 * Aim: Search an array using pointer arithmetic.
 */
#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int a[MAX_SIZE], t;
    int *p = a;
    size_t n;

    printf("Enter array size: ");
    if (scanf("%zu", &n) != 1 || n > MAX_SIZE) {
        return 1;
    }

    printf("Enter %zu elements: ", n);
    for (size_t i = 0; i < n; i++) {
        if (scanf("%d", p + i) != 1) {
            return 1;
        }
    }

    printf("Enter element to search: ");
    if (scanf("%d", &t) != 1) {
        return 1;
    }

    for (size_t i = 0; i < n; i++) {
        if (*(p + i) == t) {
            printf("Element %d found at index %zu\n", t, i);
            return 0;
        }
    }

    printf("Element %d not found\n", t);
    return 0;
}
/*
 * Output:
 * Enter array size: 5
 * Enter 5 elements: 12 45 67 89 23
 * Enter element to search: 67
 * Element 67 found at index 2
 */
