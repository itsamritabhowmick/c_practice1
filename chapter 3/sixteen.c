#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks <= 100 && marks >= 81){
        printf("Very Good");
    }
    else if(marks <= 80 && marks >= 61){
        printf("Good");
    }
    else if(marks <= 60 && marks >= 41){
        printf("Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}