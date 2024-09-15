#include<stdio.h>

int main(){
    int x,y;
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    if(x == 0 && y == 0){
        printf("It is pointed origin");
    }
    else{
        if(x > 0 && y > 0){
          printf("It is pointed first quardrant");  
        }
        else if (x < 0 && y > 0){
          printf("It is pointed second quardrant");  
        }
        else if (x < 0 && y < 0){
          printf("It is pointed third quardrant");  
        }
        else if (x > 0 && y < 0){
          printf("It is pointed fourth quardrant");  
        }
    }
    return 0;
}