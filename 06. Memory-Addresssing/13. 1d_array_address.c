/*
 * Program No.: 13
 * Program Name: Calculate 1D array element memory address
 * Date: 17.08.26
 * Aim: Calculate the memory address of a one-dimensional array element.
 */
#include <stdio.h>

int main() {
    int B, index, size_dt;
    printf("Enter Base Address (B): ");
    scanf("%d", &B);
    printf("Enter index: ");
    scanf("%d", &index);
    printf("Enter the size of data type in bytes (size_dt): ");
    scanf("%d", &size_dt);
    
    int address = B + (index * size_dt);
    printf("The calculated address of the element is : %d\n", address);
    
    return 0;
}
/*
 * Output:
 * Enter Base Address (B): 1000
 * Enter index: 4
 * Enter the size of data type in bytes (w): 4
 * Enter lower bound (LB): 0
 * The calculated address of the element is: 1016
 */
