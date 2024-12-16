// . Write a program to enter records of 5 students such as Name, Roll No.,
// and Mark in a Subject using Structure “Student” and print the data of 5
// students? (use array of structure variables)
#include <stdio.h>
struct student
{
    char name[50];
    int rollno;
    int mark;
};
int main()
{
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Name.Roll.no and Mark of studemnt %d: ",i+1);
        scanf(" %s %d %d", s[i].name, &s[i].rollno, &s[i].mark);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %d\n", s[i].name, s[i].rollno, s[i].mark);
    }

    return 0;
}