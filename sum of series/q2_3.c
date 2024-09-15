#include<stdio.h>

int main(){
    int n,fact=1;
    float sum=0.0;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact=1;
        for(int j=1; j<=i+1; j++){//n/(n+1!) korbo tai ekane i ta number so, i+1!
            fact=fact*j;
        }
        sum=sum+(i*1.0/fact);
    }
    printf("%f",sum);
    return 0;
}