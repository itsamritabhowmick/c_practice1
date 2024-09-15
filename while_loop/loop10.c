#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;
    while (t>0)
    {
        int d=t%10;
        if(d%2!=0){
            sum=sum+d;
        }
        t=t/10;
    }
    printf("%d is the sum of all odd digits of the number %d",sum,n);
    return 0;
}