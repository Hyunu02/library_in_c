#include <stdio.h>
#include "library1.h"

int main () {
    int a, b;
    printf("Write two integer numbers\n");
    scanf("%d %d", &a, &b);
    printf("First number is: %d\n", a);
    printf("Second number is: %d\n", b);

    printf("Sum is: %d\n", soma (a, b));
    printf("Subtraction is: %d\n", subtrai (a, b));
    printf("Multiplication is: %d\n", multiplica (a, b));
    return 1;
}
