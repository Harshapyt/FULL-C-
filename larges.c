#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 1st numbers :");
    scanf("%d", &a);
    printf("Enter the 2nd number :");
    scanf("%d", &b);
    printf("Enthe rthe 3rd number :");
    scanf("%d", &c);
    if (a >= b && a >= c)
    {
        printf("%d is the largest number ", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the largest number ", b);
    }
    else
    {
        printf("%d is the largest number ", c);
    }
    return 0;
}