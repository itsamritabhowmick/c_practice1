#include <stdio.h>

int main()
{
    int n;
    int a = 1;
    printf("\nEnter n:\t");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}