#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        count=0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
    }
    return 0;
}