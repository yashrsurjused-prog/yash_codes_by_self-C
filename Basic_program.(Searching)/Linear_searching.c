#include <stdio.h>

// Function declaration
int linearSearch(int a[], int n, int key);

int main() {
    int a[50], n, key, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Function call
    pos = linearSearch(a, n, key);

    if(pos == -1)
        printf("Element not found");
    else
        printf("Element found at position %d", pos + 1);

    return 0;
}

// Function definition
int linearSearch(int a[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
        if(a[i] == key)
            return i;
    }
    return -1;
}


//output:
input:
Enter number of elements: 5
Enter array elements:
10 20 30 40 50
Enter element to search: 30
output:
Element found at position 3
