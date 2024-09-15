#include<stdio.h>

int main(){
    int n,fl=0;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;
    while (t>0)
    {
        int d=t%10;//n=1234
        if(d==2){
            printf("yes");
            fl=1;
            break;
        }
        t=t/10;
    }
    if(fl==0){
        printf("no");
    }
    
    return 0;
}   