#include<stdio.h>

int main(){
    int n,c=0;
    int a=1;
    int b=1;
    printf("enter n");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}