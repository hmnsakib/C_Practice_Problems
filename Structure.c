// structure with student results
#include <stdio.h>

/* // struct_keyword structure_name {data};
struct student
{
    int roll;
    char name[30];
    float cgpa;
}; */

// type_definition struct_keyword {data} structure_name;
typedef struct
{
    int roll;
    char name[30];
    float cgpa;
} student;

int main()
{
    student sakib, nishi;
    scanf("%d%s%f", &sakib.roll, &sakib.name, &sakib.cgpa);
    scanf("%d%s%f", &nishi.roll, &nishi.name, &nishi.cgpa);

    printf("Roll\tName\tCGPA\n");
    printf("%d\t%s\t%.2f\n", sakib.roll, sakib.name, sakib.cgpa);
    printf("%d\t%s\t%.2f\n", nishi.roll, nishi.name, nishi.cgpa);

    return 0;
}