/*WAP to accept a number from the user, add 10 to the number and return the result. The
program must use call by reference and function.*/
#include<stdio.h>
void addresult(int *x)
{
    *x=*x+10;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    addresult(&n);
    printf("the result is %d",n);
    return 0;
}