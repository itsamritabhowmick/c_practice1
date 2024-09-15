#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;
    ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Address of num: %u\n", &num); 
    printf("Value stored at ptr: %p\n", ptr);
    printf("Value of num using ptr: %d\n", *ptr);
    return 0;
}