#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Worker {
    char name[20];
    struct Date dob; // Nested Structure
};

int main() {
    struct Worker w1 = {"John Doe", {15, 8, 1995}};

    printf("Worker: %s\n", w1.name);
    printf("Date of Birth: %02d/%02d/%d\n", w1.dob.day, w1.dob.month, w1.dob.year);

    return 0;
}

//Output:
Worker: John Doe
Date of Birth: 15/08/1995
