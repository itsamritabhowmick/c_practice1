#include<stdio.h>

int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    for(int i=2; i<=n; i+=2){
        printf("even numbers:%d\n",i);
    }
    return 0;
}