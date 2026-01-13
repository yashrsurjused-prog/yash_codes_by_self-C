#include <stdio.h>

int main()
{
    int x;

    printf("Enter number: ");
    scanf("%d", &x);
    if(x>0){
    printf("positive");
    }
    else{
        printf("negative");
    }
    
    return 0;
}
//output:
Enter number: 1
positive
