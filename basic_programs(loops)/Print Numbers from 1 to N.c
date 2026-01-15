#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}

//Output:
//input: 
5
//output:
1 2 3 4 5

