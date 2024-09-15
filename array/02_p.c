#include<stdio.h>

int main(){
    int arr[100];
    int n,max;
    printf("enter size:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is:\t");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}