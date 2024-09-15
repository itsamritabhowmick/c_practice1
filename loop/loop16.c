#include<stdio.h>

int main(){
    int n;
    int a=1;//first term
    int r=2;//common ratio
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d\t",a);
        a=a*r;
    }
    return 0;
}