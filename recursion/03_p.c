#include<stdio.h>
void print(int n,int x){
    if(x>n){
        return;
    }
    printf("%d\n",x);
    print(n,x+1);
}
int main(){
    int n,x=1;
    printf("enter n:");
    scanf("%d",&n);
    print(n,x);
    return 0;
}