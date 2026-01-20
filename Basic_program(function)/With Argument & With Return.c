#include <stdio.h>

// function definition (no argument, with return)
int show() {
    // returning value
    return 5;
}

int main() {
    int x;
    // function call and storing return value
    x = show();
    // printing returned value
    printf("Value = %d", x);
    return 0;
}

//output:
Value = 5
