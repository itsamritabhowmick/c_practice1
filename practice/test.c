#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n > 0){
        printf("positive");
    }
    else if(n < 0){
       printf("negative"); 
    }
    else{
        printf("Zero");
    }
    return 0;
}