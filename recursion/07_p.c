#include<stdio.h>
int power(int a, int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    int res=power(a,b);
    printf("%d",res);
    return 0;
}