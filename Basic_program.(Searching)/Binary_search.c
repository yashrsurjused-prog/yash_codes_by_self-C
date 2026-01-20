#include <stdio.h>

int main() {
    int a[10], n, key, low, high, mid, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Element found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found");

    return 0;
}

//output:(element found)
Enter number of elements: 5
Enter sorted elements:
1 3 5 7 9
Enter element to search: 7
Element found at position 4

//output:(element not found)
Enter number of elements: 5
Enter sorted elements:
2 4 6 8 10
Enter element to search: 5
Element not found

