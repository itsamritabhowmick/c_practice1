#include<stdio.h>
//WAP to calculate ab 
int power(int a, int b){
    if(b==0){
        return 1;
    }
    if((b&1)==0){
        return power(a,b/2)*power(a,b/2);
    }
    else{
        return a*power(a,b/2)*power(a,b/2);
    }
    
}

int main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    int res=power(a,b);
    printf("%d",res);
    return 0;
}