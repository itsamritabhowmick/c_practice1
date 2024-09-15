#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    // for(int i=4; i<=3*n+1; i+=3){
        /*
            an = a + (n-1)d
                = 4 + (n-1)3
                = 4 + 3n-3
                =3n + 1
        */
        /*
            an = a + (n-1)d
                = 5 + (n-1)2
                = 5 + 2n-2
                =2n + 3
        */
    for(int i=5; i<=2*n+3; i+=2){

        printf("%d\t",i);
    }
    return 0;
}