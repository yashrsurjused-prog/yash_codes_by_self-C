#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

//output:
//input:
Enter size of array: 5
Enter 5 elements:
2 4 6 8 10
//output:
Array elements are:
2 4 6 8 10
