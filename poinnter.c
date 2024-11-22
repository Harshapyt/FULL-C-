#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    printf("Value of x : %d\n", x);
    printf("Adress of x: %p\n", &x);
    printf("Value at ptr : %d\n", *ptr);

    return 0;
}