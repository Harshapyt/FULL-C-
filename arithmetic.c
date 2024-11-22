#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the a value :");
    scanf("%d", &a);
    printf("Enter the b value :");
    scanf("%d", &b);

    printf("Add : %d\n", a + b);
    printf("Sub : %d\n", a - b);
    printf("Mul : %d\n", a * b);
    printf("Div : %d", a % b);

    return 0;
}