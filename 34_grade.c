// Wap to enter mark of a student in four subject .Calculate the total aggregate percent and display the grade obtained by the student
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4;
    float percent, total;
    printf("Enter the mark of student in four subjects respectively");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
    total = m1 + m2 + m3 + m4;
    percent = (total / 400) * 100;
    printf("The Total aggregate percentage= %f", percent);
    if(percent>50){
    if (percent >= 90 && percent < 100)
    {
        printf("Grade is O");
    }
    if (percent >= 80 && percent < 90)
    {
        printf("Grade is E+");
    }
    if (percent >= 70 && percent < 80)
    {
        printf("Grade is E");
    }
    if (percent >= 60 && percent < 70)
    {
        printf("Grade is A+");
    }
    if (percent >= 50 && percent < 60)
    {
        printf("Grade is A");
    }
    }
    else{
        printf("Fail");
    }
    return 0;
}
