/*Upper Pyramid Pattern with inputed unit

5
*
**
* *
*  *
*****

 */

#include<stdio.h>

int main()
{
    int i, j, unit;
    scanf("%d",  &unit);

    for(i=1; i<=unit; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i== unit)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
