#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;
    while (t>0){
        int d=t%10;//12456
        if(d%2==0){
            printf("%d\n",d);
        }
        t=t/10;
            
    }
    return 0;
}