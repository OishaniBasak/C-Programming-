#include <stdio.h>
int main()
{
    float f,c;
    printf ("Enter temperature in fahrenheit:");
    scanf("%f", & f);
    c = 5*(f-32)/9;
    printf("The temperature will be %f°C in celcius scale",c);
    return 0;
}
