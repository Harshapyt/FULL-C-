#include <stdio.h>

int main()
{
    int wether;
    printf("Enter the number ");
    scanf("%d", &wether);
    if (wether < +18)
    {
        printf("The wether was cool ");
    }
    else if (wether >= 18 && wether <= 30)
    {
        printf("The wether is warm ");
    }
    else
    {
        printf("The wether is Sunny (PULUSU KARIDHI BROOOOO)");
    }
    return 0;
}