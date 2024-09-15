#include<stdio.h>
void myfunc(int a)
{
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return;
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    myfunc(n);
    return 0;
}