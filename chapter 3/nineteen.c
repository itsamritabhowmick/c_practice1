#include<stdio.h>

int main(){
    int a,b;
    char ch;
    printf("enter operands:");
    scanf("%d%d",&a,&b);
    printf("enter operator:");
    fflush(stdin);
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':
        printf("%d",a + b);
        break;
    case '-':
        printf("%d",a - b);
        break;
    case '*':
        printf("%d",a * b);
        break;
    case '/':
        printf("%d",a / b);
        break;
    }
    return 0;
}