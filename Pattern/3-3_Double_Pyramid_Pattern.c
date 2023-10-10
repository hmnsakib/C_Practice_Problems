/*Upper Pyramid Pattern with inputed unit

3
   *
  * *
 * * *
  * *
   *

 */

#include<stdio.h>

int main()
{
    int i, j, k, unit;
    scanf("%d",  &unit);

    for(i=1; i<=unit; i++)
    {
        for(j=unit; j>=i; j--)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=2; i<=unit; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(k=unit; k>=i; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
