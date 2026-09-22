/*
 * Program No.: 1
 * Program Name: Finding factorial using recursion
 * Date: 03.08.26
 * Aim: Find the factorial of a number using recursion.
 */
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else
        return (n * factorial(n - 1));
}

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d", number, factorial(number));

    return 0;
}

/*
 * Output:
 * Enter the number: Factorial of 5 is 120
 */
