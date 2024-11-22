#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
    {
        printf("%c is the VOLES", ch);
    }
    else if (ch >= 'A' || ch <= 'Z')
    {
        printf("%c is th consonent ", ch);
    }
    else
    {
        printf("The given charecter is special or number ");
    }

    return 0;
}