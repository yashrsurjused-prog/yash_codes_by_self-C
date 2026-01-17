#include <stdio.h>

/* Function Declaration */
int power(int, int);

int main() {
    int x, n;

    printf("Enter base and power: ");
    scanf("%d %d", &x, &n);

    /* Function Call */
    printf("Result = %d", power(x, n));

    return 0;
}

/* Function Definition */
int power(int x, int n) {
    if(n == 0)
        return 1;
    return x * power(x, n - 1);
}

//output:
//input:
Enter base and power: 2 5
//output:
Result = 32
