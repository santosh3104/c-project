#include <stdio.h>

void biggest() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Biggest number is: %d\n", a);
    else if (b >= a && b >= c)
        printf("Biggest number is: %d\n", b);
    else
        printf("Biggest number is: %d\n", c);

 //   return 0;
}

