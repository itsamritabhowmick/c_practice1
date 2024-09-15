#include<stdio.h>
int search(int *arr, int n, int target){
    int low=0;
    int high=n-1;
    int res=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            if(mid>0 && arr[mid]==arr[mid-1]){
                high=mid-1;
            }
            else{
                res=mid;
                break;
            }
        }
    }
    printf("\nThe first ocurrence of %d is %d\n",target,res);
    low=0; 
    high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            if(mid<n-1 && arr[mid]==arr[mid+1]){
                low=mid+1;
            }
            else{
                res=mid;
                break;
            }
        }
    }
    printf("\nThe last occurence of %d is %d\n",target,res);
    return 0;
}
int main(){
    int arr[100];
    int n;
    int target=0;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter target:");
    scanf("%d",&target);
    search(arr,n,target);
    return 0;
}