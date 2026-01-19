#include <stdio.h>

int main() {
    int a[5], i, j, key;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < 5; i++) {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("Sorted array:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}

//output:
Enter 5 elements:
9 5 1 4 3
Sorted array:
1 3 4 5 9
