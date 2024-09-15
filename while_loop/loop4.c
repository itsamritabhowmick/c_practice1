#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    int t=n;
    while(t>0){
        int d=t%10;
        // sum=sum+(d*d*d);
        int res=d*d*d;
        sum=sum+res;
        t=t/10;
    }
    if(sum==n){
        printf("%d is a armstrong number",n);
    }
    else{
        printf("%d is not armstrong",n);
    }
    return 0;
}