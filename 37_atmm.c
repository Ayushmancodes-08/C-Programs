// WAP to design an atm message which only accept the amount entered rupees 500,1000,1500,2000 using if-elseif

#include <stdio.h>
int main()
{
    int money;
    printf("Enter Money for the ATM :");
    scanf("%d", &money);
    if (money == 500){
        printf("Money Accepted is Rs.500");
    }
    else if (money == 1000)
    {
        printf("Money Accepted is Rs.1000");
    }
    else if (money == 1500)
    {
        printf("Money Accepted is Rs.1500");
    }
    else if (money == 2000)
    {
        printf("Money Accepted is Rs.2000");
    }
    else
    {
        printf("Invalid input!! Please enter Rs.500,1000,1500 or 2000 to deposit");
    }
    return 0;
}