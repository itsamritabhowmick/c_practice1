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
    // to get largest element
    int max=arr[0];//array er first index ke initialize korbo ; r jehutu ami first index e koto number ache seta janina tai array input kore display korar por i amra ei max ba min define korbo
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nThe largest element is: %d",max);
    return 0;
}