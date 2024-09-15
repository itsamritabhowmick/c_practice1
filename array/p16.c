#include<stdio.h>
int palindrome(int *arr,int n){
    int i=0;
    int j=n-1;
    int fl=0;
    while (i<j)
    {
        if(*(arr+i)!=*(arr+j)){
            fl=1;
            break;
        }
        i++;
        j--;
    }
    return fl;
}
int main(){
    int arr[100];
    int n;
    printf("enter size of the array:");
    scanf("%d",&n);
    printf("enter elements in the array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    int res=palindrome(arr,n);
    if(res==0){
        printf("\nPalindrome array");
    }
    else{
        printf("\nNot Palindrome array");
    }
    return 0;
}