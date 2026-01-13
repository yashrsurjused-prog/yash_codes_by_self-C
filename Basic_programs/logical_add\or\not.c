#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Logical AND (a>0 && b>0): %d\n", (a > 0 && b > 0));
    printf("Logical OR  (a>0 || b>0): %d\n", (a > 0 || b > 0));
    printf("Logical NOT (!(a>0))    : %d\n", !(a > 0));

    return 0;
}

//output:
Enter two numbers: 12
56
Logical AND : 1
Logical OR  : 1
Logical NOT : 0
