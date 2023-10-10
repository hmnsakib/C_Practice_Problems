/*Upper Pyramid Pattern with inputed unit

3
***
* *
***

 */

#include<stdio.h>

int main()
{
    int i, j, unit;
    scanf("%d",  &unit);

    for(i=1; i<=unit; i++)
    {
        for(j=1; j<=unit; j++)
        {
            if(j==1 || j==unit || i==1 || i==unit)
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
