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
    //count positive and negative number
    int pos_count=0;
    int neg_count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            pos_count++;
        }   
        else{
            neg_count++;
        }
    }
    printf("\npositive count is %d and negative count is %d",pos_count,neg_count);
    return 0;
}