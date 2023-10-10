#include <stdio.h>

typedef struct
{
    int roll;
    char name[30];
    float cgpa;
} student;

int main()
{
    student sakib, nishi;
    FILE *fp;

    scanf("%d%s%f", &sakib.roll, &sakib.name, &sakib.cgpa);
    scanf("%d%s%f", &nishi.roll, &nishi.name, &nishi.cgpa);

    printf("Roll\tName\tCGPA\n");
    printf("%d\t%s\t%.2f\n", sakib.roll, sakib.name, sakib.cgpa);
    printf("%d\t%s\t%.2f\n", nishi.roll, nishi.name, nishi.cgpa);

    // fopen ("file_name.file_extension", "file_mode")
    // w write
    // a append
    // r read
    fp = fopen("output.txt", "a");
    fprintf(fp, "%d\t%s\t%.2f\n", sakib.roll, sakib.name, sakib.cgpa);
    fprintf(fp, "%d\t%s\t%.2f\n", nishi.roll, nishi.name, nishi.cgpa);
    fclose(fp);

    printf("File created successful!");

    return 0;
}