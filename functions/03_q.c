#include<stdio.h>
int check_even_odd(int x){
    if(x%2==0){
        return 1;
    }
    else{
        return 0;
    } 
}
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int res = check_even_odd(a);//function call
    if(res==1){
        printf("It is even number");
    }
    else{
        printf("It is odd number");
    }

    return 0;
}