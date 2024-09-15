#include<stdio.h>
int search(int* arr, int n, int target) {
    int low;
    int high;
    int res=-1;
    low=0;
    high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            high=mid-1;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            res=mid;
            break;
        }
    }
    return res;
}
int main(){
    int arr[100];
    int n;
    int target;
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
    printf("\nEnter target:");
    scanf("%d",&target);
    int res=search(arr,n,target);
    printf("\n%d",res);
    return 0;
}