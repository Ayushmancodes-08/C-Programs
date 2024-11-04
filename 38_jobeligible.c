// WAP to check eligiblity of a candidate in job if he scored 50% in 10th,55% in 12th and 55% in btech using nested-if


#include <stdio.h>
int main()
{
    float tenth, twelth, btech;
    printf("Enter your percentage in 10th(out of 100%)");
    scanf("%f", &tenth);
    if (tenth >= 50)
    {
        printf("Enter your !2th percentage(out of 100%)");
        scanf("%f", &twelth);
        if (twelth >= 50)
        {
            printf("Enter your btech percentage (out of 100%)");
            scanf("%f", &btech);
            if (btech >= 55)
            {
                printf("You Are Eligible for Job Post");
            }
            else
            {
                printf("You are not Eligible");
            }
        }
        else
        {
            printf("You are not Eligible");
        }
    }
    else
    {
        printf("You are not Eligible");
    }
    return 0;
}