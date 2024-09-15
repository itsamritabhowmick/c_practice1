// #include<stdio.h>
// //print  even numbers
// int main(){
//     int n;
//     printf("Enter n");
//     scanf("%d",&n);
//     for (int i=1; i<=n; i++){
//         if(i%2 == 0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
#include<stdio.h>
//sum of all even numbers
int main(){
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
       if(i%2 == 0){
            sum = sum + i;
        }
    }
    printf("The sum is %d",sum);
    return 0;
}