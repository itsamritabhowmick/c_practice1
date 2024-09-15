#include<stdio.h>
void factorial(int x)
{
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return;
}
int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    factorial(a);
    return 0;
}