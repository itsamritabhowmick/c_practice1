#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a , b , c:");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("All are same");
    }
    else
    {
        if (a < b)
        {
            if (a < c)
            {
                printf("a is least");
            }
            else
            {
                printf("c is least");
            }
        }
        else
        {
            if (b < c)
            {
                printf("b is least");
            }
            else
            {
                printf("c is least");
            }
        }
    }
    return 0;
}
