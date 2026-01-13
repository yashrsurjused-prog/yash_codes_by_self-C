#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x,&y,&z);
    
    if (x>y) {
        if(x>z){
            printf("Largest number is %d", x);
        }
        else {
            printf("Largest number is %d", z);
        }
    }
    else {
        if (y>z) {
            printf("Largest number is %d", y);
        }
        else {
            printf("Largest number is %d", z);
        }
    }

    return 0;
}

//Output:
Enter three numbers: 10
20
30
Largest number is 30
