#include <stdio.h>

int main()
{
    FILE *fpt;
    char c;

    fpt = fopen("star.dat", "r");

    if (fpt == NULL)
        printf("Error - can't open file");
    else
    {
        do
        {
            putchar(c = getc(fpt));
        } while (c != 'o');

        fclose(fpt);
    }

    return 0;
}
