#include<stdio.h>

int main(){
    /*
    Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F
    */
   int marks;
   printf("enter marks:");
   scanf("%d",&marks);
   if (marks <= 100 && marks >= 90){
    printf("A");
   }
   else if (marks <= 90 && marks >= 80){
    printf("B");
   }
   else if (marks <= 80 && marks >= 70){
    printf("C");
   }
   else if (marks <= 70 && marks >= 60){
    printf("D");
   }
   else if (marks <= 60 && marks >= 50){
    printf("E");
   }
   else if (marks <= 50){
    printf("F");
   }
    return 0;
}
