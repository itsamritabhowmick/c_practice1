#include<stdio.h>

int main(){
    int arr[100];
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("enter elements in the array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //display
    printf("\nThe array is:");
    for(int i=0;i<n; i++){
        printf("%d\t",arr[i]);
    }
    int sum=0;
    int sum1=0;
    for(int i=0; i<n; i++){
        if((i&1)==0){
            sum=sum+arr[i];
        }
        else{
            sum1=sum1+arr[i];
        }
    }
    printf("\n%d is the difference between the sum off elements at even indices and sum of elements in the odd indices",sum-sum1);
    return 0;
}