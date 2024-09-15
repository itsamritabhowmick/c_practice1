#include<stdio.h>
void selectionSort(int *arr, int n)
{
    for(int i=0; i<n-1; i++){
        int min=arr[i];
        int pos=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                pos=j;
            }
        }
        int t=arr[i];
        arr[i]=arr[pos];
        arr[pos]=t;
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
    selectionSort(arr,n);
    printf("\nThe sorted array is:");
    for(int i=0; i<n; i++){
        printf("\n%d\t",arr[i]);
    }
    return 0;
}