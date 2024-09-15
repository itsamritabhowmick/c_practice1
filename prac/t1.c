#include<stdio.h>

int main(){
    int arr[100];
    int n;
    printf("\nEnter n:");
    scanf("%d",&n);
    printf("\nEnter elements in the array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe adress of first element is:%p",arr+0);
    printf("\nThe adress of second element is:%p",arr+1);
    return 0;
}   