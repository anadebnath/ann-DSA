
/*
 * Program No.: 11
 * Program Name: Traverse and access array using pointers
 * Date: 17.08.26
 * Aim: Traverse an array using a pointer.
 */
#include <stdio.h>

int main(void) {
    int a[] = {10, 20, 30, 40, 50};
    size_t n = sizeof(a) / sizeof(a[0]);
    int *p = a;

    for (size_t i = 0; i < n; i++) {
        printf("%d%s", *(p + i), (i + 1 == n) ? "\n" : " ");
    }

    return 0;
}
/*
 * Output:
 * 10 20 30 40 50
 */
