#include<stdio.h>

int main(){
    int arr[100];
    int n,min;
    printf("enter size:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
    }
    //display
    printf("The array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}