#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Value using pointer = %d", *p);

    return 0;
}

//output:
Value of a = 10
Value using pointer = 10
