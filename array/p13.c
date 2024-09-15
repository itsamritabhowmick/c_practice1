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
    //second largest element
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\n%d is the largest element in this array",max);
    int smax=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=max){
            if(arr[i]>smax){
                smax=arr[i];
            }    
        }
    }
    printf("\n%d is the second largest element in this array",smax);
    return 0;
}