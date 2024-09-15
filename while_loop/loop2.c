#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;
    while (t>0)
    {
       int d=t%10;
       sum=sum+d;
       t=t/10;
    }
    printf("%d",sum);
    return 0;
}