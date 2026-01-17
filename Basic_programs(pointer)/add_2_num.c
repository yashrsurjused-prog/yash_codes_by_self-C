#include <stdio.h>
int main()
{
    int a, b;
    int *p = &a, *q = &b;

    scanf("%d %d", p, q);
    printf("Sum = %d", *p + *q);

    return 0;
}

//output:
/input:10 20
/output:Sum = 30
