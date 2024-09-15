#include<stdio.h>
#include<limits.h>
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
    int max=INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        
    }
    printf("\n%d is the maximum element of this 2D array",max);
    
    return 0;
}