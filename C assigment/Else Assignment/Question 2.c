#include <stdio.h>
#include <conio.h>
void main()
{
  printf("\n\n\t\t\t\t\t----------FIND ODD & EVEN----------\n\n");
  int num;
  printf("Enter a number :");
  scanf("%d",&num);
  if(num%2==0)
    {
      printf("This is Even Number :%d",num);
    }
  else if(num%2==1)
    {
      printf("This is Odd Number :%d",num);
    }
  else
    {
      printf("INVALID INPUT !");
    }

  getch();
}
