#include<stdio.h>
void sum(int x, int y, int *add)
{
    *add=x+y;
}
int main(){
    int a,b,s=0;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    sum(a,b,&s);
    printf("%d is the sum of %d and %d",s,a,b);
    return 0;
}