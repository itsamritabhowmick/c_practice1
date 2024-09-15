#include<stdio.h>
void swap(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

}
int main(){
    int a,b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d is the value of a and %d is the value of b",a,b);
    return 0;
}