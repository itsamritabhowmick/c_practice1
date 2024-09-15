//wap to display the highest factor of a number excluding n
#include<stdio.h>

int main(){
    int n,factor=0;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        if(n%i==0){
            factor=i;
        }
    }
    printf("%d\t",factor);
    return 0;
}
