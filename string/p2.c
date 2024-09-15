#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char str2[50];
    printf("\nEnter first string:");
    gets(str);
    printf("\nEnter second string:");
    gets(str2);
    puts(str);
    puts(str2);
    int x=strcmp(str,str2);
    if(x==0){
        printf("\nTwo strings are same");
    }
    else{
        printf("\n\nTwo strings are not same");
    }
    return 0;
}