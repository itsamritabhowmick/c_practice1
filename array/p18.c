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
    return res;
}
int main(){
    int arr[100];
    int n;
    int target;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elemnts:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\nenter target:");
    scanf("%d",&target);
    int res=search(arr,n,target);
    printf("%d",res);
    return 0;
}