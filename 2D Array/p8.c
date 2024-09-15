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
    //original matrix
    printf("\nThe array is:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int arr2[col][row];
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            arr2[i][j]=arr[j][i];
        }
    }
    printf("\nThe transpose array is:\n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}