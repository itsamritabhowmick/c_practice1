#include<stdio.h>

int main(){
    int arr[10];
    int n;
    int sum=0;
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
    //sum of all even-positioned elements
    for(int i=0; i<n; i++){
        if((i&1)==0){
            sum=sum+arr[i];
        }
    }
    printf("\n%d is the sum of all even-positioned numbers in the array",sum);
    return 0;
}