#include<stdio.h>

int main(){
    int n,res=1;
    printf("enter number:");
    scanf("%d",&n);
    int t=n;
    while(t>0){
        int d=t%10;
        res=res*d;
        t=t/10;
    }
    printf("%d",res);
    return 0;
}