// UDF by value
#include <stdio.h>

int add(int x, int y); // function declaration

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = add(a, b); // arguments // function call
    printf("%d", c);
    return 0;
}

// return_type function_name (parameters){}
int add(int p, int q) // function definition / body
{
    printf("Value of p: %d\n", p);
    printf("Value of q: %d\n", q);
    p = 10;
    q = 20;
    printf("Value of p: %d\n", p);
    printf("Value of q: %d\n", q);
    return p + q;
}