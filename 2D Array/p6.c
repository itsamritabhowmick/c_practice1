#include<stdio.h>

int main(){
    int arr[100][100];
    int row,col,l1,r1,l2,r2;
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter column:");
    scanf("%d",&col);
    printf("Enter first co-ordinates:");
    scanf("%d%d",&l1,&r1);
    printf("Enter second co-ordinates:");
    scanf("%d%d",&l2,&r2);
    printf("enter elements:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The array is:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=1; i<=4; i++){
        for(int j=1; j<=2; j++){
            sum=sum+arr[i][j];
        }
    }
    printf("\n%d",sum);
    return 0;
}