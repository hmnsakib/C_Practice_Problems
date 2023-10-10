// file output with sir problem
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("Day70.txt", "w");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    printf("File input complete");

    fp = fopen("Day70.txt", "r");
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}