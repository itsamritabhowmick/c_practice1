#include<stdio.h>

int main(){
    int n,rev=0;
    printf("enter number:");
    scanf("%d",&n);
    int t=n;//backup
    while (t>0)
    {
        int d=t%10;
        rev=(rev*10)+d;
        t=t/10;
    }
    if(rev==n){
        printf("%d is a palindrome number:",n);
    }
    else{
        printf("%d is not a palindrome number",n);
    }
    return 0;
}