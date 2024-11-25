// WAP TO PRINT PATTERN : 1
//   2 3
//   4 5 6
//   7 8 9 10
#include <stdio.h>
int main()
{
    int i, j, s = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", s);
            s++;
        }
        printf("\n");
    }
    return 0;
}