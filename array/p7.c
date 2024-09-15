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
    //count even and odd
    int even_count=0;
    int odd_count=0;
    for(int i=0; i<n; i++){
        if((arr[i]&1)==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("\nEven numbers are %d and odd numbers are %d",even_count,odd_count);
    return 0;
}