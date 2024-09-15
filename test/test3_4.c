#include<stdio.h>

int main(){
    int a,b,gcd=0,lcm=0;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    for (int i=1; (i<=a && i<=b); i++){
       if(a%i==0 && b%i==0){
            gcd=i;
        } 
    }
    lcm=(a*b)/gcd;
    printf("The lcm is %d",lcm);
    return 0;
}