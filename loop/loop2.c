#include<stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i=n; i>=1; i--){
        printf("%d\n",i);
    }
    printf("hello");
    return 0;
}