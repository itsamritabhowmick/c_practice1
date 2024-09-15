#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum=0;
        for(int j=1; j<i; j++){
            if(i%j==0){
                sum=sum+j;
            }  
        }
        if(sum==i){
            printf("%d\t",i);
        }
    }
    return 0;
}