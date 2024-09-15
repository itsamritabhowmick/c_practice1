#include<stdio.h>

int main(){
    int i=1;
    int c=9;
    while (i++)
    {
        if(i==5) continue;
        if(i==7) break;
        printf("%d, %d\t",i,c++);
    }
    
    return 0;
}