/*Rectangle Pattern with inputed row and col number

3 3
* * *
* * *
* * **/

#include<stdio.h>

int main()
{
    int i, j, row, col;
    scanf("%d %d",  &row, &col);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
