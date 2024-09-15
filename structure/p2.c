#include <stdio.h>
#include <string.h>
typedef struct time
{
    int hours;
    int minute;
    int second;
} hms;

int main()
{
    hms s1, s2;
    s1.hours = 7;
    s1.minute = 5;
    s1.second = 59;
    s2.hours = 6;
    s2.minute = 59;
    s2.second = 11;
    printf("\nTime t1 is:");
    printf("\n%d:%d:%d", s1.hours, s1.minute, s1.second);
    printf("\nTime t2 is:");
    printf("\n%d:%d:%d", s2.hours, s2.minute, s2.second);
    hms s3;
    s3.second = s1.second + s2.second;
    s3.minute = s1.minute + s2.minute;
    s3.hours = s1.hours + s2.hours;
    if (s3.second >= 60)
    {
        s3.second = s3.second % 60;
        s3.minute = s3.minute + 1;
    }
    if (s3.minute >= 60)
    {
        s3.minute = s3.minute % 60;
        s3.hours = s3.hours + 1;
    }
    printf("\nThe result is:");
    printf("\n%d:%d:%d",s3.hours,s3.minute,s3.second);

return 0;
}