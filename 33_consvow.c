//Wap to check whether a character entered is vowel or consonant using if else statement
#include <stdio.h>
int main()
{
 char ch;
 printf("Enter a character ");
 scanf("%c",&ch);
 if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
    printf("It is a vowel");
 }
 else{
    printf("It is a consonant");
 }
return 0;
}