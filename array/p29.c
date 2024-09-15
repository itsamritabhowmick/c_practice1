#include<stdio.h>
void moveZeroes(int* arr, int n) {
    int left=0;
    int right=0;
    for(int i=0; i<n; i++){
        if(arr[right]==0){
            right++;
        }
        else{
            int t=arr[right];
            arr[right]=arr[left];
            arr[left]=t;
            left++;
            right++;
        }
    }
}
int main(){
    int arr[100];
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
    moveZeroes(arr,n);
    printf("\nThe new array is:");
    for(int i=0; i<n; i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}