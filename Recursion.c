include <stdio.h>
#include <limits.h>

static int factorial(unsigned int n, unsigned long long *result)
{
    if (n == 0U || n == 1U) {
        *result = 1ULL;
        return 1;
    }

    unsigned long long previous;
    if (!factorial(n - 1U, &previous) || previous > ULLONG_MAX / n) {
        return 0;
    }
    *result = previous * n;
    return 1;
}

int main(void)
{
    unsigned int number;
    unsigned long long result;

    printf("Enter the number: ");
    if (scanf("%u", &number) != 1) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (!factorial(number, &result)) {
        fprintf(stderr, "Factorial is too large for unsigned long long.\n");
        return 1;
    }

    printf("Factorial of %u is %llu\n", number, result);
    return 0;
}