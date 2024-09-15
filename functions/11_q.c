#include<stdio.h>
int palindrome(int num)
{
    int t=num,rev=0;
    while(t>0){
        int d=t%10;
        rev=(rev*10)+d;
        t=t/10;
    }
    if(rev==num){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int res=palindrome(n);
    if(res==1){
        printf("%d is a palindrome number",n);
    }
    else{
        printf("%d is not a palindrome number",n);
    }
    return 0;
}