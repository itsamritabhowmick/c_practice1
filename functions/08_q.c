#include<stdio.h>
int factorial(int fact)
{
    int f=1;
    for(int i=1; i<=fact; i++){
        f=f*i;
    }
    return f;
    
}
int permutation(int x, int y)
{
    int npr;
    npr=factorial(x)/factorial(x-y);
    return npr;
}
int main(){
    int n,r;
    printf("enter n,r");
    scanf("%d%d",&n,&r);
    int res= permutation(n,r);
    printf("%d",res);
    return 0;
}