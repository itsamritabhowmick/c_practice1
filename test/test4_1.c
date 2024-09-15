#include<stdio.h>
int prime(int num)
{
    int count=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int res=prime(n);
    if(res==1){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number:",n);
    }
    return 0;
}