// WAP to design a resturant menu by entering the option by using switch case
#include <stdio.h>
int main()
{
    int ch;
    printf("Enter 1 for Paneer\n  2 for Mushroom\n 3 for Naan\n 4 for chowmin\n 5 for Chicken: ");
    scanf("%d", &ch);
    switch (ch)
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
        printf("Your Chicken Dish will be ready in 5 minutes");
        break;
    default:
        printf("Please enter correct menu-Option");
    }
    return 0;
}