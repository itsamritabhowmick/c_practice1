#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter a & b & c:");
    scanf("%d%d%d", &a, &b, &c);
    if(a < b && a < c){
        printf("a is least");
    }
    else if(b < a && b < c){
        printf("b is least");
    }
    else if(c < a && c < b){
        printf("c is least");
    }
    else{
        printf("All three numbers are same");
    }
    return 0;
}