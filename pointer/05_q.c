/*WAP to accept two numbers from the user and find the maximum and minimum among
them using function. In the same function, add 5 to the minimum value and display the updated
min value from the main function.*/
#include<stdio.h>
void maxMin(int *x, int *y)
{
    if(*x>*y){
        printf("%d\n",*x);
        *y=*y+5;
        printf("so %d is updated value of minimum\n",*y);
    }
    else{
        printf("%d\n",*y);
        *x=*x+5;
        printf("so %d is updated value of minimum\n",*x);
    }
}
int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    maxMin(&a,&b);
    return 0;
}