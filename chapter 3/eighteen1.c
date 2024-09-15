#include<stdio.h>

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    (n > 0)?printf("positive"):(n < 0)?printf("negative"):printf("zero");
    return 0;
}