#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    sum = n*(n+1)/2;
    printf("the sum is %d",sum);
    return 0;
}
