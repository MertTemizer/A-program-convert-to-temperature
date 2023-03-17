//A program convert to temperature.
#include <stdio.h>

int main()
{
    float F, C;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
    
    C = (F - 32) * 5 / 9;
    
    printf("Temperature in Celsius is: %f", C);
    
    return 0;
}
