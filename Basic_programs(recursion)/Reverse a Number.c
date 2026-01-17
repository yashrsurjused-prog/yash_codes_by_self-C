#include <stdio.h>

/* Function Declaration */
int reverse(int, int);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    /* Function Call */
    printf("Reverse = %d", reverse(num, 0));

    return 0;
}

/* Function Definition */
int reverse(int n, int rev) {
    if(n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

//output:
//input:
Enter a number: 123
//output:
Reverse = 321
