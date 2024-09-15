#include<stdio.h>

int main(){
    int a =45;
    int *ptr= &a;
    char ch='A';
    char *chptr=&ch;
    float f=90.456433;
    float *fptr=&f;
    printf("size of a is %d\n",sizeof(a));
    printf("size of ptr is %d\n",sizeof(ptr));

    printf("size of ch is %d\n",sizeof(ch));
    printf("size of chptr is %d\n",sizeof(chptr));

    printf("size of f is %d\n",sizeof(f));
    printf("size of fptr is %d\n",sizeof(fptr));
    return 0;
}