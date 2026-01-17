#include <stdio.h>

/* Function Declaration */
int fibonacci(int);

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    /* Function Call */
    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

/* Function Definition */
int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

//output:
//input:
Enter number of terms: 5
//output:
Fibonacci Series: 0 1 1 2 3
