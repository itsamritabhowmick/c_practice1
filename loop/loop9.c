#include<stdio.h>

int main(){
    int a,b,res=1;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    for (int i=1; i<=b; i++){
        res=res*a;
    }
    printf("the result%d",res);
    return 0;
}