#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for (int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int a, int b)
{
    int ncr;
    ncr=factorial(a)/(factorial(b) * factorial(a-b));
    return ncr;
} 
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    int res=combination(n,r);
    printf("%d",res);
    return 0;
}
// nCr = n! / (r! * (n-r)!)