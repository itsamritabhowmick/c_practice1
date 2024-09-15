#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("It is Even");
    }
    else{
        printf("It is odd");
    }
    return 0;
}