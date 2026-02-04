#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

// Function that takes a structure as an argument
void calculateArea(struct Rectangle r) {
    float area = r.length * r.width;
    printf("Rectangle Area: %.2f\n", area);
}

int main() {
    struct Rectangle myRect = {10.5, 5.0};
    
    // Calling the function
    calculateArea(myRect);
    
    return 0;
}

//Output:
Rectangle Area: 52.50
