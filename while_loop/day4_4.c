#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" \t",j);
        }
        for(int k=1; k<=n; k++){
            printf("*\t");
        }
        printf("\n");
        
    }
    return 0;
}