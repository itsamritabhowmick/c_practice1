#include<stdio.h>
int squareroot(int x)
{
    int low=0;
    int high=x;
    int res=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(mid*mid>x){
            high=mid-1;
        }
        else {
            res=mid;
            low=mid+1;
        }
    }
    return res;
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int res=squareroot(n);
    printf("%d",res);
    return 0;
}