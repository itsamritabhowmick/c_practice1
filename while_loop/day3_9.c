/*1
01
101
0101*/
#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                printf("1\t");
            }
            else{
                printf("0\t");
            }
        }
        printf("\n");
    }
    return 0;
}