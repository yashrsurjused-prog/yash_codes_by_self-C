#include <stdio.h>

int main()
{
    int n, i;
    int a[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }

    printf("Smallest element = %d", min);

    return 0;
}

//output:
//input:
Enter size of array: 5
Enter elements:
12 7 25 3 18
//output:
Smallest element = 3
