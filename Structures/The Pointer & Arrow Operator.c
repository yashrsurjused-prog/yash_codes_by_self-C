#include <stdio.h>

struct Smartphone {
    char model[20];
    int ram;
    float price;
};

int main() {
    struct Smartphone phone = {"iPhone 15", 8, 799.99};
    
    // Create a pointer pointing to the 'phone' structure
    struct Smartphone *ptr = &phone;

    printf("--- Smartphone Specs (Using Pointers) ---\n");
    
    // Use the '->' operator to access data through the pointer
    printf("Model: %s\n", ptr->model);
    printf("RAM: %d GB\n", ptr->ram);
    printf("Price: $%.2f\n", ptr->price);

    return 0;
}

//Output:
--- Smartphone Specs (Using Pointers) ---
Model: iPhone 15
RAM: 8 GB
Price: $799.99
