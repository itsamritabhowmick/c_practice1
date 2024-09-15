#include<stdio.h>

int main(){
    //usering inputs supplied by the user
    int length;
    int width;
    printf("Enter value of length:");
    scanf("%d",&length);
    printf("Enter value of width:");
    scanf("%d",&width);
    printf("The area of rectangle is %d",length*width);
    return 0;
}