#include<stdio.h>

int main(){
    int arr[100];
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //display the array
    printf("The array is:\n");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The sum is:");
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}