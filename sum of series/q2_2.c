#include<stdio.h>
//1 + (1/2!) + (1/3!) + (1/4!) +……. n terms
int main(){
    int n;
    float sum=0.0;
    int fact=1;
    printf("enter n:");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){//for range
        fact=1;
        for(int j=1; j<=i; j++){//number 
            fact=fact*j;
        }
        sum=sum+(1.0/fact);
    }
    printf("%f",sum);
    return 0;
}