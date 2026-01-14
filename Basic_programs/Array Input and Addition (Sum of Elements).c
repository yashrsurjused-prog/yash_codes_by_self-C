#include <stdio.h>

int main() {
    int arr[100];
    int n, i, sum = 0;

    // Taking number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   // Adding elements
    }

    // Printing sum
    printf("Sum of array elements = %d", sum);

    return 0;
}

//Output:
Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Sum of array elements = 150
