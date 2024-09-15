#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[100][100];
    int row;
    int col;
    printf("Enter row of the array:");
    scanf("%d", &row);
    printf("Enter column of the array:");
    scanf("%d", &col);
    printf("\nEnter elements in this array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe array is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    int min=INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    printf("\n%d is the minimum element of this 2D array",min);
    return 0;
}