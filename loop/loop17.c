#include<stdio.h>

int main(){
    int n;
    int a=3;
    int r=4;
    printf("enter n:");
    scanf("%d",&n);
    for (int i=1; i <=n; i++){
        printf("%d\t",a);
        a=a*r;
    }
    return 0;
}