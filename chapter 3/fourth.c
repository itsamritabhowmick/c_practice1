#include<stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if (n%5 == 0){
        printf("It is divisible by 5");
    }
    else{
        printf("It is not divisible by 5");
    }
    return 0;
}