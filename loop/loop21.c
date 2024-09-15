#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("enter number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { // ami 1 theke 30 obdhi range nite chai so 1 theke 30 obdhi amar loop cholbe. n ta tai ami ekane range er jonno use korlam
        count = 0;
        for (int j = 1; j <= i; j++)
        { // ekon ami chcek korbo 1 theke 30 er modhye jotogulo prime number ache r eisob number gulo asche i theke so i ke check korbo
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}