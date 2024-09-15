#include<stdio.h>
int mypow(int a,int b)
{
    int res=1;
    for(int i=1; i<=b; i++){
        res=res*a;
    }
    return res;
}
int count(int n)
{
    int t=n,count=0;
    while (t>0)
    {
        count++;
        t=t/10;
    }
    return count;
    
}
int armstrong(int num)
{
    int c=count(num);
    int t=num;
    int sum=0;
    while (t>0)
    {
        int d=t%10;
        int x=mypow(d,c);
        sum= sum+x;
        t=t/10;
    }
    return sum;
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int res=armstrong(n);
    printf("%d\n",res);
    if(res==n){
        printf("%d is a armstrong number:",n);
    }
    else{
        printf("%d is not a armstrong number:",n);
    }
    return 0;
}