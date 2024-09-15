#include<stdio.h>

int main(){
    int n,res=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){//Cube of 4 is 64  Cube of 3 is 27
        res=i*i*i;
        printf("cube of %d is %d\n",i,res);
    }
    return 0;
}