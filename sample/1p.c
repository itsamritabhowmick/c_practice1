#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("\nEnter n:");
    scanf("%d",&n);
    int *arr=(int *)calloc(n,sizeof(int));
    printf("\nEnter elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //display
    printf("\nThe array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);

    }
    int *f=(int *)calloc(10,sizeof(int));//ei array te 10 er upor kono element rakhlam na
    printf("\nThe duplicate element:");
    for(int i=0; i<n; i++){
        f[arr[i]]++;
    }
    for(int i=0; i<n; i++){
        printf("%d\t",f[i]);
    }
    free(arr);
    free(f);
    return 0;
}