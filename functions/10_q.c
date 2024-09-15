#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int combination (int a, int b)
{
    int ncr;
    ncr=factorial(a)/(factorial(b)*factorial(a-b));
    return ncr;
}
int main(){
    int n;
    printf("enter row:");
    scanf("%d",&n);
    for (int i=0; i<=n; i++){
        for (int j=0; j<=i; j++){
            int res=combination(i,j);
            printf("%d\t",res);
        }
        printf("\n");
    }
    
    
    return 0;
}