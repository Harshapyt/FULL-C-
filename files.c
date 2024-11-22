#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("file.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening the file\n");
        return 1;
    }

    fprintf(fp, "AS9(7 7 7) is here");

    fclose(fp);
    
    return 0;
}
