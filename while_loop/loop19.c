#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%c\t",j+96);
        }
        printf("\n");
    }
    return 0;
}