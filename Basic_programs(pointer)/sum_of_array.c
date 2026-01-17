#include <stdio.h>
int main()
{
    int a[5], i, sum = 0;
    int *p = a;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    for(i = 0; i < 5; i++)
        sum += *(p + i);

    printf("Sum = %d", sum);

    return 0;
}

//output:
/input: 2 4 6 8 10
/output: Sum = 30
