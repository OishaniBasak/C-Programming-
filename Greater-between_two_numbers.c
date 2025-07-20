#include <stdio.h>
int main()
{
int a,b;
printf ("Enter 1st number: "); 
scanf("%d",&a);
printf ("Enter 2nd number :");
scanf("%d",&b);
if (!(a>b))
{
printf("b is greater than a");
}
else
{
printf("a is greater than b");
}
return 0;
}
