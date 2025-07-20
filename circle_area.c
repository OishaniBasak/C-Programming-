#include <stdio.h>
#include <math.h>
#define pi = 3.1416
int main() 
{
    float r, volume;
    printf ("Enter the radius of a circle:");
    scanf("%f",&r);
    volume=(4*pi*pow(r,3))/3;
    printf ("Volume of sphere : %f",volume);
  return 0;
}
