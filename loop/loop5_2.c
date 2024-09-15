#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(int i=2; i<=n; i+=2){
        sum = sum +i;
    }
    printf("even numbers:%d\n",sum);
    return 0;
}   