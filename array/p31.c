#include<stdio.h>
#include<stdlib.h>
int search(int *arr, int n){
    int low=0; 
    int high=n-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else{
            res=mid;
            high=mid-1;
        }
    }
    return res;
}
int main(){
    int n;
    printf("enter n:");
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
    int res=search(arr,n);
    printf("\nres is%d",res);
    free(arr);
    return 0;
}