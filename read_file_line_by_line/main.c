#include <stdio.h>
#include <string.h>

#define LINE_LEN 100

int main() {
    FILE *inp, *outp;

    char inname[50], outname[50];

    char line[LINE_LEN];
    char *status;
    int i = 0;

    printf("Name of input file> ");
    scanf("%s", inname);

    printf("Name of output file> ");
    scanf("%s", outname);

    inp = fopen(inname, "r");
    outp = fopen(outname, "w");


    for (status = fgets(line, LINE_LEN, inp); status != NULL; status = fgets(line, LINE_LEN, inp))
    {
        /* Remove the newline character if it exists */
        if (line[strlen(line) - 1] == '\n')
            line[strlen(line) - 1] = '\0';

        fprintf(outp, "%3d>> %s\n\n", ++i, line);
    }

    fclose(inp);
    fclose(outp);

    return 0;
}
