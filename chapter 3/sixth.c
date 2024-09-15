#include<stdio.h>

int main(){
    int l,b;
    printf("Enter length & breadth:");
    scanf("%d%d",&l,&b);
    // printf("The area of a rectangle is %d\n",l*b);
    // printf("The perimeter of a rectangle is %d\n",2*(l+b));
    int area,peri;
    area = l*b;
    peri = 2*(l+b);
    if(area > peri){
        printf("The area of rectangle is big");
    }
    else{
        printf("The perimeter of rectangle is big");
    }

    return 0;
}