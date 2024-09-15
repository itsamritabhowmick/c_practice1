#include<stdio.h>

int main(){
    int arr[10];
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("The elements are:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //display
    printf("The array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    //to get smallest element
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nThe smallest element is:%d",min);
    return 0;
}