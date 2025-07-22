#include <stdio.h>
#include <conio.h>
int main() 
{
    int a,b,ch,ans;
    printf ("Enter 1st number:");
    scanf("%d",&a);
    printf ("Enter 2nd number:");
    scanf("%d",&b);
    printf ("\nChoices: \n1.Addition \n2.Sunstraction \n3.Multiplication\n4.Division");
    printf ("Enter a choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
              ans=a+b;
              printf ("The result of sum is :%d",ans);
              break;
        case 2:
              ans=a-b;
              printf ("The result of substraction is :%d",ans);
              break;
        case 3:
              ans=a*b;
              printf ("The result of multiplication is :%d",ans);
              break;
        case 4:
              ans=a/b;
              printf ("The answer of division is :%d",ans);
              break;
        default:
               printf("You have entered wrong choice.");
        
    }
    return 0;
}
