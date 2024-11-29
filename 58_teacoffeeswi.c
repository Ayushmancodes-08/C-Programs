 // 10. Write a program to create a menu for Tea option and Coffee option using 
// user defined functions and switch case. Hint: Function will not return any value and it has only one argument (Option).
    #include <stdio.h>
    void swi(int ch);
    int main()
    {
     int choice;
     printf("Enter your choice. 1 for tea and 2 for coffee :");
     scanf("%d",&choice);
     swi(choice);
    return 0;
    }
    void swi(int c){
        switch(c){
            case 1:
            printf("Tea is coming");
            break;
            case 2:
            printf("Coffee is coming");
            break;
            default:
            printf("Wrong Choice");
        }
    }