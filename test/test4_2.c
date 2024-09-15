#include<stdio.h>
float circleOfArea(float a)
{
    float area=3.14*a*a;
    return area;
}
int main(){
    float r;//radius
    printf("enter radius:");
    scanf("%f",&r);
    float res=circleOfArea(r);
    printf("%f",res);
    return 0;
}