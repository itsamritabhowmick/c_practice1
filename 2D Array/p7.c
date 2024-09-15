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
    //print original matrix
    printf("The array is or row major form is :\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    //print transpose matrix
    printf("The Transpose array is or column major form:\n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}