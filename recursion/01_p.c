#include<stdio.h>
//WAP to accept n from user and print from n to 1
void print(int x)
{
    if(x==0){//base case
        return;
    }
    printf("%d\n",x);
    print(x-1);//recursive case

}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    print(n);
    return 0;
}