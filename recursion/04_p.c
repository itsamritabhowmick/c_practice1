#include<stdio.h>
int sum(int n)
{
    if(n==1){
        return 1;
    }
    int add;
    add=n+sum(n-1); 
    return add;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int res=sum(n);
    printf("%d",res);
    return 0;
}