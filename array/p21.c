#include<stdio.h>
int peakIndexInMountainArray(int* arr, int n) {
    int low=0;
    int high=n-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            res=mid;
            break;
        }
        else if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else{
           high=mid-1; 
        }
        
    }
    return res;
}
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
    int res=peakIndexInMountainArray(arr,n);
    printf("\n%d",res);
    return 0;
}                                           