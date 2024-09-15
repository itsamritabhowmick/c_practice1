#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int t=n;//backup of n
    while(t>0){
        int d=t%10;//extracting digit
        printf("%d\n",d);//print extracting digit
        t=t/10;//reduce 
    }
    return 0;
}