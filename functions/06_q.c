#include<stdio.h>
void ascii()
{
    int i=65;
    while(i<=90){
        printf("%d is %c\n",i,i);
        i++;  
    }
    return;
}
int main(){
    ascii();
    return 0;
}