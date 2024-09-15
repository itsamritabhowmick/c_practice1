
/*WAP to accept radius from the user and calculate area of a circle using function. Implement
call by reference.*/
#include<stdio.h>
void areaOfCircle(float r, float *res)
{
    *res=3.14*r*r;
}
int main(){
    float r,res=0.0;//radius
    printf("enter radius");
    scanf("%f",&r);
    areaOfCircle(r,&res);
    printf("%0.2f is the area of circle",res);
    return 0;
}