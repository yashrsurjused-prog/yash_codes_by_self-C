#include <stdio.h>
int main()
{
    int a, b, temp;
    int *p = &a, *q = &b;

    scanf("%d %d", p, q);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("%d %d", a, b);

    return 0;
}

//output:
/input: 5 9
/output: 9 5
