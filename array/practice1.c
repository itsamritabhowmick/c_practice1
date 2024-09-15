#include<stdio.h>

int main(){
    int arr[10];
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //display
    printf("The array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    //to get address
    printf("\nThe address of first element:%p",&arr[0]);    
    printf("\nThe address of first element:%p",arr+0); 
    printf("\nThe address of first element:%p",arr);//evabeo lekha jai
    printf("\nThe address of second element:%p",&arr[1]);    
    printf("\nThe address of second element:%p",arr+1); 
    printf("\nThe address of third element:%p",&arr[2]);    
    printf("\nThe address of third element:%p",arr+2);
    printf("\nThe address of all elements are:");
    for(int i=0; i<n; i++){
        printf("%p\t",arr+i);
    }  
    //to get value  
    printf("\nThe value of all elements are:");
    for(int i=0; i<n; i++){
        printf("%d\t",*(arr+i));
    }  
    return 0;
}