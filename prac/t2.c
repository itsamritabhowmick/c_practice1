#include<stdio.h>
typedef union student
{
    int roll;
    float marks;
    char name[21];
}std;
int main(){
    std s1;
    s1.roll=5;
    printf("%d\n",sizeof(s1));
    return 0;
}