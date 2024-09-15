#include<stdio.h>

int main(){
    int arr[100][100];
    int row,col;
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter column:");
    scanf("%d",&col);
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
    int product=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            product=product*arr[i][j];
        }
    }
    printf("\n %d is the product of all elements present in this array",product);
    return 0;
}