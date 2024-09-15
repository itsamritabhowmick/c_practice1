#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("\nEnter size:");
    scanf("%d",&n);
    int *arr=(int *) calloc (n,sizeof(int));
    printf("\nEnter elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("\nThe sum is:%d",sum);
    free(arr);
    return 0;
}