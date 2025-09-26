#include <stdio.h>

void Addition() {
    int num1, num2, sum;

    // Taking input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Print result
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    //return 0;
}
