#include <stdio.h>

/* Function Declaration */
int factorial(int);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* Function Call */
    printf("Factorial = %d", factorial(n));

    return 0;
}

/* Function Definition */
int factorial(int n) {
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

//Output:
//input:
Enter a number: 5
//output:
Factorial = 120
