#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==2*n){
        printf("%d is a perfect number",n);
    }
    else{
        printf("It is not perfect");
    }
    return 0;
}