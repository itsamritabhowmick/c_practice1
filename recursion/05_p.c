#include<stdio.h>
int fact(int n)
{
    int f=1;
    if(n==0 || n==1){
        return 1;
    }
    f=n*fact(n-1);
    return f;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int res=fact(n);
    printf("%d",res);
    return 0;
}