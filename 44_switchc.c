// WAP to design a resturant menu by only using nested switch case
#include <stdio.h>
int main()
{
    int main, submain;
    printf("Enter your Choice: 1 for Veg \n \t 2 for Non-veg");
    scanf("%d", &main);
    switch (main)
    {
    case 1:
        printf("Enter 1 for Paneer\n  2 for Mushroom\n 3 for Naan\n 4 for chowmin\n 5 for Veg-momo: ");
        scanf("%d", &submain);
        switch (submain)
        {
        case 1:
            printf("Your Paneer Dish will be ready in 5 minutes");
            break;
        case 2:
            printf("Your Mushroom Dish will be ready in 5 minutes");
            break;
        case 3:
            printf("Your Naan Dish will be ready in 5 minutes");
            break;
        case 4:
            printf("Your Chowmin Dish will be ready in 5 minutes");
            break;
        case 5:
            printf("Your Veg-momo Dish will be ready in 5 minutes");
            break;
        default:
            printf("Please enter correct menu-Option");
        }
    case 2:
        printf("Enter 1 for Chicken\n  2 for Mutton\n 3 for Fish\n 4 for Prawn\n 5 for Chicken-Biriyani: ");
        scanf("%d", &submain);
        switch (submain)
        {
        case 1:
            printf("Your Chicken Dish will be ready in 5 minutes");
            break;
        case 2:
            printf("Your Mutton Dish will be ready in 5 minutes");
            break;
        case 3:
            printf("Your Fish Dish will be ready in 5 minutes");
            break;
        case 4:
            printf("Your Prawn Dish will be ready in 5 minutes");
            break;
        case 5:
            printf("Your Chicken-Biriyani Dish will be ready in 5 minutes");
            break;
        default:
            printf("Please enter correct menu-Option");
        }
    }
    return 0;
}