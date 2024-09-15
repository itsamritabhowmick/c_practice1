#include<stdio.h>
#include<stdlib.h>
int search(int *arr, int n, int target)
{
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
            res=mid;
            break;
        }
    }
    return res;
}
int main(){
    int n,x;
    printf("Enter n:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("\nEnter elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter target number:");
    scanf("%d",&x);
    int res=search(arr,n,x);
    printf("\nThe rersult is:%d\t",res);
    free(arr);
    return 0;
}