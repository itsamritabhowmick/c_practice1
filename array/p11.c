//linear search 
#include<stdio.h>
int check_element(int n,int *arr, int x){
    int pos=-1;
    for(int i=0; i<n; i++){
        if(*(arr+i)==x){//arr[i]=*(arr+i)
            pos=i;
            break;
        }
    }
    return pos;
}
int main(){
    int arr[10];
    int n,x;
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
    printf("\nenter element to search:");
    scanf("%d",&x);
    int res=check_element(n,arr,x);
    printf("\n%d",res);
    return 0;
}