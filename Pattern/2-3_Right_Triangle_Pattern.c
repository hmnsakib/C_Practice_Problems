/*Right Triangle Pattern with inputed unit

3
*
* *
* * *
* *
**/

#include<stdio.h>

int main()
{
    int i, j, unit;
    scanf("%d", &unit);

    for(i=1; i<=unit; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1; i<=unit; i++)
    {
        for(j=unit; j>i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
