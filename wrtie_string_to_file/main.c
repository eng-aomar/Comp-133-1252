#include <stdio.h>

int main()
{
    FILE *fpt;
    char str[100];

    fpt = fopen("string.dat", "r");

    if (fpt == NULL)
        printf("Error - can't create file");
    else
    {
        printf("Enter a string: ");

        fgets(str, sizeof(str), stdin);
        // OR
        int i =0;
        while (str[i] != '\n')
        {
            putc(str[i], fpt);
            i++;
        }


        //fputs(str, fpt);

        fclose(fpt);

        printf("String written successfully.\n");
    }

    return 0;
}
