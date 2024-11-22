#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Read a&b");
    scanf("%d%d", &a, &b);
    c = a & b;
    printf("The answer after adding is (c) = %d", c);
    return 0;
}