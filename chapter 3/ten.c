#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter a & b & c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b > c && b+c > a && c+a > b){
        printf("It is the triangle");
    }else{
        printf("It is not the triangle");
    }
    return 0;
}