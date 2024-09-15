#include<stdio.h>

int main(){
    int n;
    int a=1;
    int d=3;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d\t",a);
        a=a+d;
    }
    return 0;
}