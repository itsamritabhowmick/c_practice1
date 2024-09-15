#include<stdio.h>

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
    // to get sum
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("\nThe sum of the elements %d",sum);
    return 0;
}