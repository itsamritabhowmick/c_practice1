#include<stdio.h>
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d is the value of a and %d is the value of b after swapping",a,b);
    return 0;
}