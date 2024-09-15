#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    sum= sum+(n*(n+1)*(2*n+1))/6;
    printf("%d",sum);
    return 0;
}