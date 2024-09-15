#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("%d %d %d these three are same", a, b, c);
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                printf("a is greater");
            }
            else
            {
                printf("c is greater");
            }
        }
        else
        {
            if (b > c)
            {
                printf("b is greater");
            }
            else
            {
                printf("c is greater");
            }
        }
    }
    return 0;
}