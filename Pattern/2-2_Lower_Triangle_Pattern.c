/*Lower Triangle Pattern with inputed unit

3
* * *
* *
**/

#include<stdio.h>

int main()
{
    int i, j, unit;
    scanf("%d",  &unit);

    for(i=unit; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
