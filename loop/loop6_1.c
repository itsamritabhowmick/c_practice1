#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i+=2){
       sum=sum+i; 
    }
    printf("%d",sum);
    return 0;
}