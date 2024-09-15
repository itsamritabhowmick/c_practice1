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
    //to get product
    int product=1;
    for(int i=0; i<n; i++){
        product=product*arr[i];
    }
    printf("\nThe product of this array %d",product);
    return 0;
}