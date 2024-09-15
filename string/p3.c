#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    int x=strlen(str);
    int i=0;
    int j=x-1;
    while (i<j)
    {
        int t=*(str+i);
        *(str+i)=*(str+j);
        *(str+j)=t;
        i++;
        j--;
    }
    
}
int main(){
    char str[50];
    printf("\nEnter a string:");
    gets(str);
    puts(str);
    reverse(str);
    puts(str);
    return 0;
}