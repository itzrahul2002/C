#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------MONTHS---------------\n\n\n\n");
  int mon;
  printf("Enter A Months Number :");
  scanf("%d",&mon);

  if(mon==1)
    {
      printf("It's JANUARY");
    }
  else if(mon==2)
    {
      printf("It's FEBUARY");
    }
  else if(mon==3)
    {
      printf("It's MARCH");
    }
  else if(mon==4)
    {
      printf("It's APRIL");
    }
  else if(mon==5)
    {
      printf("It's MAY");
    }
  else if(mon==6)
    {
      printf("It's JUNE");
    }
  else if(mon==7)
    {
      printf("It's JULY");
    }
  else if(mon==8)
    {
      printf("It's AUGUST");
    }
  else if(mon==9)
    {
      printf("It's SEPTEMBER");
    }
  else if(mon==10)
    {
      printf("It's OCTOBER");
    }
  else if(mon==11)
    {
      printf("It's NOVERMBER");
    }
  else if(mon==12)
    {
      printf("It's DECEMBER");
    }
  else
    {
      printf("INVALID INPUT !");
    }

  getch();
}
