#include<stdio.h>
void bubbleSort(int *arr,int n)
{
    for(int i=0; i<n-1; i++){//no of passes
        int fl=0;
        for(int j=0; j<n-1-i; j++){//no of comparison
            if(arr[j]>arr[j+1]){//ascending order
            //if(arr[j]<arr[j+1]){//descending order
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
                fl=1;
            }
        }
        if(fl==0){
            break;
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
    bubbleSort(arr,n);
    printf("\nThe sorted array is:");
    for(int i=0; i<n; i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}