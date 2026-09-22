/*
 * Program No.: 4
 * Program Name: Traverse an array
 * Date: 03.08.26
 * Aim: Traverse an array and print every element.
 */
#include <stdio.h>
int main () {
    int number [5] = {5, 10, 15, 20, 25};
    for (int i = 0; i < 5; i++) {
        printf ("Index %d -> %d\n", i, number [i]);
    }
    return 0;
}

/*
 * Output:
 * Enter number of elements: Enter 5 elements: Array elements:
 * Index 0 -> 5
 * Index 1 -> 10
 * Index 2 -> 15
 * Index 3 -> 20
 * Index 4 -> 25
 */
