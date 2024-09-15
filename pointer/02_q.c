
/*WAP to check whether a number is even or odd using function. Implement call by
reference.
*/
#include<stdio.h>
void odd_even(int x, int *res)
{
    if(x%2==0){
        *res=1;
    }
    else{
        *res=0;
    }
    return;
}
int main(){
    int n,res=0;
    printf("Enter number:");
    scanf("%d",&n);
    odd_even(n,&res);
    if(res==1){
        printf("%d is a even number",n);
    }
    else{
        printf("%d is a odd number",n);
    }
    return 0;
}