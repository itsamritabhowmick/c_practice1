#include<stdio.h>

int main(){
    int n,a,d;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter first term:");
    scanf("%d",&a);
    printf("enter common difference:");
    scanf("%d",&d);
    for(int i=1; i<=n; i++){
        printf("%d\t",a);
        a=a+d;
    }
    return 0;
}