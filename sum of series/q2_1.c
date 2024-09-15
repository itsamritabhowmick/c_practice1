#include<stdio.h>

int main(){
    int n,sum=0,fact=1;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact=fact*i;
        sum=sum+fact;
    }
    printf("%d",sum);
    return 0;
}