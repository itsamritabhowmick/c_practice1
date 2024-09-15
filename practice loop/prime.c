#include<stdio.h>

int main(){
    int n,counter=0;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(n%i==0){
            counter++;
        }
    }
    if(counter==2){
        printf("It is prime");
    }
    else{
        printf("It is not prime");
    }
    return 0;
}