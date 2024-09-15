#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if (n > 0){
        printf("%d",n);
    }
    else{
        printf("%d",-n);
    }
    return 0;
}