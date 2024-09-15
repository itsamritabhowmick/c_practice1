#include<stdio.h>

int main(){
    int row;
    int col;
    printf("enter row:");
    scanf("%d",&row);
    printf("enter col:");
    scanf("%d",&col);
    for (int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}