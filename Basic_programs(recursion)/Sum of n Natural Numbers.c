#include <stdio.h>

/* Function Declaration */
int sum(int);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    /* Function Call */
    printf("Sum = %d", sum(n));

    return 0;
}

/* Function Definition */
int sum(int n) {
    if(n == 0)
        return 0;
    return n + sum(n - 1);
}

//output:
//input:
Enter n: 10
//output:
Sum = 55
