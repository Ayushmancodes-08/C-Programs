// Aceept data and show it(BioData)
#include <stdio.h>
int main()
{
    char name[15], city[10], branc[20], coll[30], bldgrp;
    int pin, phn;
    printf("Enter your name\n");
    gets(name);
    printf("Enter your city\n");
    gets(city);
    printf("Enter your Branch\n");
    gets(branc);
    printf("Enter Your COllege Name");
    gets(coll);
    printf("Enter your area Pin-Code\n");
    scanf("%d", &pin);
    printf("Enter your phone-number\n");
    scanf("%d", &phn);
    printf("Your BioData is .....\n");

    printf("Name :%s\n", name);
    printf("City :%s\n", city);
    printf("Branch :%s\n", branc);
    printf("College :%s\n", coll);
    printf("Area Pin-code:%d \n", pin);
    printf("Phone nuumber:%d\n", phn);

    return 0;
}