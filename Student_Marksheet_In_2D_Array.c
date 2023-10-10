/*Student marksheet in 2D array

Enter total number of students and subjects: 3 3
Enter the marks of 3 subjects of student no 1 : 10 11 12
Enter the marks of 3 subjects of student no 2 : 13 14 15
Enter the marks of 3 subjects of student no 3 : 16 17 18

Total marks (in matrix):
10  11  12
13  14  15
16  17  18

Total marks (in individual):
Total marks of student no 1 : 33
Total marks of student no 2 : 42
Total marks of student no 3 : 51

Average marks (in individual):
Total marks of student no 1 : 11.00
Total marks of student no 2 : 14.00
Total marks of student no 3 : 17.00

Average marks (in subject):
Average marks of subject no 1 : 13.00
Average marks of subject no 2 : 14.00
Average marks of subject no 3 : 15.00*/

#include<stdio.h>

int main()
{
    int student, mark, i, j, total_mark=0, ave_mark=0;

    printf("Enter total number of students and subjects: ");
    scanf("%d %d",  &student, &mark);

    int table[student][mark];

    for(i=0; i<student; i++)
    {
        printf("Enter the marks of %d subjects of student no %d : ", mark, i+1);
        for(j=0; j<mark; j++)
        {
            scanf("%d",  &table[i][j]);
        }
    }

// Total marks (in matrix)
    printf("\nTotal marks (in matrix):\n");
    for(i=0; i<student; i++)
    {
        for(j=0; j<mark; j++)
        {
            printf("%d  ", table[i][j]);
        }
        printf("\n");
    }

// Total marks (in individual)
    printf("\nTotal marks (in individual):\n");
    for(i=0; i<student; i++)
    {
        for(j=0; j<mark; j++)
        {
            total_mark=total_mark+table[i][j];
        }
        printf("Total marks of student no %d : %d\n", i+1, total_mark);
        total_mark=0;
    }

// Average marks (in individual)
    printf("\nAverage marks (in individual):\n");
    for(i=0; i<student; i++)
    {
        for(j=0; j<mark; j++)
        {
            total_mark=total_mark+table[i][j];
        }
        printf("Total marks of student no %d : %0.2f\n", i+1, (float)total_mark/mark);
        total_mark=0;
    }

//Average marks (in subject)
    printf("\nAverage marks (in subject):\n");
    for(j=0; j<mark; j++)
    {
        for(i=0; i<student; i++)
        {
            ave_mark=ave_mark+table[i][j];
        }
        printf("Average marks of subject no %d : %0.2f\n", j+1, (float)ave_mark/student);
        ave_mark=0;
    }

    return 0;
}
