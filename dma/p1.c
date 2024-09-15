#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("\nEnter size of the array:\t");
    scanf("%d",&n);
    int *arr=(int *) calloc(n,sizeof(int));
    printf("\nEnter elements:\t");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    free(arr);
    return 0;
}