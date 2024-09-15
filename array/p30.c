#include<stdio.h>
void moveZeroes(int* arr, int n) {
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]==0){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
}
int main(){

    return 0;
}