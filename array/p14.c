#include<stdio.h>

int main(){
    int a[100];
    int n;
    printf("enter size of the array:");
    scanf("%d",&n);
    printf("Enter elemnts in the array:");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    //display
    printf("The array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",a[i]);
    }
    int b[100];
    for(int i=0; i<n; i++){
        b[i]=a[n-1-i];//b[0]=a[10-1-0];assume the size of array is 10
    }
    printf("\nThe second array is:");
    for(int i=0; i<n; i++){
        printf("\n%d\t",b[i]);
    }
    return 0;
}