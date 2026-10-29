//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, 
//and writes the result to output.txt.

#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL)
    {
        printf("Cannot open input file.\n");
        return 1;
    }
    if (fp2 == NULL)
    {
        printf("Cannot create output file.\n");
        fclose(fp1);
        return 1;
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;   // Convert to uppercase
        }

        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Text converted to uppercase and written to output.txt\n");

    return 0;
}