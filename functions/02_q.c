#include<stdio.h>
float product(float x, float y)
{
    float pro=x*y;
    return pro;
}
int main(){
    float a;
    float b;
    printf("Enter first number:");
    scanf("%f",&a);
    printf("Enter second number:");
    scanf("%f",&b);
    float res= product(a, b);//function call
    printf("%f",res);
    return 0;
}