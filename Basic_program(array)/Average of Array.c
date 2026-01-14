#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int a[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Average = %d", sum / n);

    return 0;
}

//output:
//input:
Enter size of array: 3
Enter elements:
10 20 30
//output:
Average = 20
