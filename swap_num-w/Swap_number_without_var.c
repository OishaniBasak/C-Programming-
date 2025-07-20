#include <stdio.h>
int main()
{
    int a,b;
    printf ("Enter 1st number:");
    scanf("%d", & a);
    printf ("Enter 2nd number:");
    scanf("%d", & b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf ("The first number: %d",a);
    printf ("\nThe 2nd number is: %d",b);
    return 0;
}
