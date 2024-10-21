#include <stdio.h>

int main() {
    float d1, d2, area;
    
    printf("Enter the length of the first diagonal: ");
    scanf("%f", &d1);
    
    printf("Enter the length of the second diagonal: ");
    scanf("%f", &d2);
    
    area = 0.5 * d1 * d2;
    
    printf("The area of the rhombus is: %f\n", area);
    
    return 0;
}
