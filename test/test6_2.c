#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int res=fibo(n);
    printf("%d",res);
    return 0;
}