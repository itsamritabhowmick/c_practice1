#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("\nEnter number:");
    scanf("%d",&n);
    int *arr=(int *) malloc (n*sizeof(int));
    printf("\nEnter elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    int max=arr[0];
    printf("\nThe maximum element is:");
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nThe maximum element is:%d",max);
    free(arr);
    return 0;
}