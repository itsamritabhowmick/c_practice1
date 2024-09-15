#include<stdio.h>
#include<stdlib.h>
int rotate(int *arr,int n,int target){
    int low=0;
    int high=n-1;
    int res=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            res=mid;
            break;
        }
        else if(arr[low]<=arr[mid]){
            if(target>=arr[low]&&target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target<=arr[high]&&target>=arr[mid]){
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
    int n;
    int target;
    printf("\nEnter n:");
    scanf("%d",&n);
    int *arr=(int *)calloc(n,sizeof(int));
    printf("\nenter elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter target:");
    scanf("%d",&target);
    int res=rotate(arr,n,target);
    printf("\n%d",res);
    return 0;
}