#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if (n > 999 && n < 10000){
        printf("It is a 4 digit number");
    }
    else{
      printf("It is not a 4 digit number");  
    }
    return 0;
}