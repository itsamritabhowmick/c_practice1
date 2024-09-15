#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a,b before swapping");
    scanf("%d%d",&a,&b);
    int t=a;
    a=b;
    b=t;
    printf("after swapping a is %d and b is %d",a,b);
    return 0;
}