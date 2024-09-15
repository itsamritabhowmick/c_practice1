#include<stdio.h>

int main(){
    int n,count=0;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;
    while(t>0){
        int d=t%10;
        count++;
        t=t/10; 
    }
    printf("%d\t",count);
    return 0;
}