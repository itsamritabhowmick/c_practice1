#include<stdio.h>

int main(){
    int n,X,fact=1;
    float sum=0.0;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter X:");
    scanf("%d",&X);
    for(int i=1; i<=n; i++){
        fact=1;
        for(int j=1; j<=i; j++){
            fact=fact*j;
        }
        sum=sum+(X*1.0/fact);
    }
    printf("%f",sum);
    return 0;
}