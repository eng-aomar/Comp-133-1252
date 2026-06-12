#include <stdio.h>

int main()
{
    FILE *fpt;
    char ch;

    fpt = fopen("char.dat", "w");

    if (fpt == NULL)
        printf("Error - can't create file");
    else
    {
        printf("Enter a character: ");
        scanf("%c", &ch);

        putc(ch, fpt); // fprintf("%c",ch,fpt);

        fclose(fpt);

        printf("Character written successfully.\n");
    }

    return 0;
}
