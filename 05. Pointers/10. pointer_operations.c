/*
 * Program No.: 10
 * Program Name: The pointers
 * Date: 17.08.26
 * Aim: Demonstrate basic pointer and pointer-to-pointer operations.
 */
#include <stdio.h>

int main(void)
{
    int n = 50;
    int value = 10;
    int *pointer = &n;
    int **pointer_to_pointer = &pointer;

    printf("%d %d\n", n, value);
    printf("%d\n", *pointer);

    *pointer = 25;
    printf("%d %d\n", n, *pointer);

    **pointer_to_pointer = 50;
    printf("%d %d %d\n", n, *pointer, **pointer_to_pointer);

    return 0;
}

/*
 * Output:
 * 50 10
 * 50
 * 25 25
 * 50 50 50
 */
