#include <stdio.h>

int add(int *x, int *y);

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = add(&a, &b);
    printf("%d", c);

    return 0;
}

int add(int *p, int *q)
{
    printf("Address of p: %d\n", p);
    printf("Value of p: %d\n", *p);
    printf("Address of q: %d\n", q);
    printf("Value of q: %d\n", *q);

    *p = 10;
    *q = 10;

    return (*p + *q);
}