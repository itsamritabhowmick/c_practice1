#include <stdio.h>
typedef struct student
{
    int roll;
    float sgpa;
} s;

int main(int argc, char const *argv[])
{
    s s1;
    s1.roll = 4;
    s1.sgpa = 8.97;

    s *ptr;
    ptr = &s1;
    printf("Roll is %d\n", s1.roll);
    printf("Roll is %d\n", ptr->roll);
    return 0;
}
