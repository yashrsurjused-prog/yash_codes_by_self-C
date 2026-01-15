#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

//output:
//input 
Enter n: 10
//output:
Sum = 55


