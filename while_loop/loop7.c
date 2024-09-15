#include<stdio.h>

int main(){
    int n,rev=0;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;
    while (t>0){
        int d=t%10;
        rev=(rev*10)+d;
        t=t/10;
    }
    if(rev==n){
        printf("%d is a pallindrome number",n);
    }
    else{
        printf("%d is not a pallindrome number",n);
    }
    return 0;
}