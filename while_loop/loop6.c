#include<stdio.h>

int main(){
    int n,rev=0;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;
    while(t>0){
        int d=t%10;
        rev=(rev*10)+d;
        t=t/10;
    }
    printf("%d\n",rev);
    return 0;
}
