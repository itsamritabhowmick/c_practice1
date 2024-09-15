#include<stdio.h>

int main(){
    int sp,cp;
    printf("Enter selling Price:");
    scanf("%d",&sp);
    printf("Enter cost Price:");
    scanf("%d",&cp);
    if (cp < sp){
        printf("The seller made profit %d\n",sp-cp);
    }else{
      printf("The seller made loss %d\n",cp-sp);  
    }
    return 0;
}