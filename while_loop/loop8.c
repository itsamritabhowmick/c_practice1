#include<stdio.h>

int main(){
    int n,sum=0,fact=1;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;
    while(t>0){
        int d=t%10;
        fact=1;
        for(int i=1; i<=d; i++){
            fact=fact*i;
        }
        sum=sum+fact;
        t=t/10;
    }
    if(sum==n){
        printf("%d is a special number",n);
    }
    else{
        printf("%d is not a special number",n);
    }
    return 0;
}