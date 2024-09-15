#include <stdio.h>
#include <string.h>

// Define the union
struct student {
    int roll;
    float marks;
    char name;
};

int main() {
    // Declare a union variable
    struct student s1;

    // Assign values to the union members
    s1.roll = 101;
    s1.marks = 95.5;
    // 
    s1.name='A';

    // Print the size of the union
    printf("Size of union student: %lu bytes\n", sizeof(s1));

    return 0;
}