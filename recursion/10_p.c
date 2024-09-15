#include<stdio.h>
int gcd(int a, int b)
{
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    if(a<b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    int res=gcd(a,b);
    printf("%d",res);
    return 0;
}