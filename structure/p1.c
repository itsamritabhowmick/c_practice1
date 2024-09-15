#include<stdio.h>
#include<string.h>
typedef struct student
{
    int age;
    int total_marks;
    char name[40];
}std;

int main(){
    std s1,s2;
    s1.age=45;
    s1.total_marks=140;
    strcpy(s1.name,"amrita");
    printf("%d\n",sizeof(s1));
    s2.age=40;
    s2.total_marks=240;
    strcpy(s2.name,"promita");
    printf("\nThe s1.age is:%d",s1.age);
    printf("\nSimilarly Total marks is:%d",s1.total_marks);
    printf("\nThe name of the student is:%s",s1.name);
    printf("\nThe s2.age is:%d",s2.age);
    printf("\nSimilarly Total marks is:%d",s2.total_marks);
    printf("\nThe name of the student is:%s",s2.name);
    float avg;
    avg=(s1.total_marks+s2.total_marks)/2.0;
    printf("\nThe average marks is:%f",avg);
    return 0;
}