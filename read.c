#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    // Write to a file
    file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "This is a test file.\n");
    fclose(file);

    // Read from the file
    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    while (fgets(text, 100, file))

    {
        printf("%s", text);
    }
    fclose(file);

    return 0;
}
