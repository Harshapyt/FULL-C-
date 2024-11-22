#include <stdio.h>

int main()
{
    int grade;
    printf("Enter the Grade ");
    scanf("%d", &grade);
    if (grade >= 90)
    {
        printf("PASSED :: 'O'GRADE ");
    }
    if (grade > 80 && grade < 90)
    {
        printf("PASSED :: 'A' GRADE ");
    }
    if (grade > 70 && grade < 80)
    {
        printf("PASSED :: 'B' GRADE");
    }
    if (grade > 60 && grade < 70)
    {
        printf("PASSED :: 'C' GRADE");
    }
    if (grade > 50 && grade < 60)
    {
        printf("PASSED :: 'D' GRADE");
    }
    if (grade > 40 && grade < 50)
    {
        printf("PASSED :: 'F' GRADE");
    }

    return 0;
}