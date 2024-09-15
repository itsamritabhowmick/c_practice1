#include<stdio.h>
int search(int* arr, int n, int target) {
    int low=0;
    int high=n-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            res=mid;
            break;
        }
        else if(arr[low]<=arr[mid]){
            //left side of array is sorted
            if(target>=arr[low] && target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            //here right side of array is sorted
            if(target<=arr[high] && target>=arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return res;
}
int main(){
    int arr[100];
    int n;
    int target;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:");
    for(int i=0; i<n; i++){
        printf("\n%d\t",arr[i]);
    }
    fflush(stdin);
    printf("\nEnter target:");
    scanf("%d",&target);
    search(arr,n,target);
    int res=search(arr,n,target);
    // for(int i=0; i<n; i++){
        printf("\n%d",res);
    // }
    
}