#include<stdio.h>
void reverse(int *arr,int n)
{
    // for(int i=0,j=n-1; i<n; i++){
    //     *(arr+i)=*(arr+i) + *(arr+j);
    //     *(arr+j)=*(arr+i) - *(arr+j);
    //     *(arr+i)=*(arr+i) - *(arr+j);

    // }
    int i=0;
    int j=n-1;
    while (i<j)
    {
        *(arr+i)=*(arr+i) + *(arr+j);
        *(arr+j)=*(arr+i) - *(arr+j);
        *(arr+i)=*(arr+i) - *(arr+j);
        i++;
        j--;

    }

}
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
    reverse(arr,n);
    printf("\n the array is:");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}