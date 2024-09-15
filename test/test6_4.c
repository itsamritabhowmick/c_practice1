#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int product=1;
    printf("enter n:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:\t");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\nThe product of this array is:");
    for(int i=0; i<n; i++){
        product=product*arr[i];
    }
    printf("\n%d",product);
    free(arr);
    return 0;
}