#include<stdio.h>
int mySqrt(int x) {
    int low = 0;
    int high = x;
    int res = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid > x) {
            high = mid - 1;
        } else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int res=mySqrt(n);
    printf("\n%d",res);
    return 0;
}