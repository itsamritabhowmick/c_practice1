#include<stdio.h>
void insertionSort(int *arr,int n)
{
    for(int i=0; i<n-1; i++){
        int j=i+1;
        while (j>0 && arr[j]<arr[j-1])
        {
            arr[j]=arr[j]+arr[j-1];
            arr[j-1]=arr[j]-arr[j-1];
            arr[j]=arr[j]-arr[j-1];
            j--;
        }    
    }
}
int main(){
    int arr[100];
    int n;
    printf("enter size of the array:");
    scanf("%d",&n);
    printf("\nEnter elements in the array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is:");
    for(int i=0; i<n; i++){
        printf("\n%d\t",arr[i]);
    }
    insertionSort(arr,n);
    printf("\nThe sorted array is:");
    for(int i=0; i<n; i++){
        printf("\n%d\t",arr[i]);
    }
    return 0;
}