#include<stdio.h>
int mySum(int x, int y)
{
    int add=x+y;
    return add;
}
void myProd(int x, int y)
{
    int product=x*y;
    printf("%d\n",product);
    return;
}
int main(){
    int a;
    int b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    int res=mySum(a, b);
    myProd(a,b);
    printf("%d\n",res);
    return 0;
}