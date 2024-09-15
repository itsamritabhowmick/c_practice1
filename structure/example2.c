#include <stdio.h>
#include <string.h>

struct employee
{
    // properties of employee
    int ecode;      // emplyee code
    char name[100]; // string
    float sal;      // salary
    char grade;
};

struct student
{
    char studentName[100];
    int phno;
    int roll;
    float sgpa;
};

int main(int argc, char const *argv[])
{
    int a;
    struct employee e1;
    struct student amrita;
    strcpy(amrita.studentName, "Amrita Bhowmick");
    amrita.phno = 789654;
    amrita.roll = 3;
    amrita.sgpa = 8.99;
    printf("%d\n", amrita.roll);
    a = 34;
    e1.ecode = 45;
    e1.grade = 'A';
    strcpy(e1.name, "Amrita Bhowmick AB");
    e1.sal = 567843.77;
    printf("\nEmployee Details:");
    printf("\nName is %s\n", e1.name);
    printf("\nSalary is %f\n", e1.sal);
    printf("\nEmployee Code is %d\n", e1.ecode);
    printf("\nEmployee Grade is %c\n", e1.grade);

    int arr[100];
    arr[0] = 5;
    arr[1] = 56;

    struct employee starr[5];
    starr[0].ecode = 12;
    starr[0].sal = 120000;
    starr[0].grade = 'B';
    strcpy(starr[0].name, "Rahul Das");

    starr[1].ecode = 112;
    starr[1].sal = 1000;
    starr[1].grade = 'C';
    strcpy(starr[1].name, "Rohan Das");
    return 0;
}