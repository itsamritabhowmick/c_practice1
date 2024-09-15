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
    strcat(str2,str);
    puts(str2);
    return 0;
}