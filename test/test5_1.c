#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    // if((n & 1)== 0){
    //     printf("even");
    // }
    // else{
    //     printf("odd");
    // }
    int res=n&1;
    if(res==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}