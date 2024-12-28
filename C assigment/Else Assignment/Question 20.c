#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------MONTHS & DAYS---------------\n\n\n\n");
  int mon;
  printf("Enter A Months Number :");
  scanf("%d",&mon);

  if(mon==1)
    {
      printf("It's JANUARY \n");
      printf("31 DAYS");
    }
  else if(mon==2)
    {
      printf("It's FEBUARY \n");
      printf("28 DAYS \n");
    }
  else if(mon==3)
    {
      printf("It's MARCH \n");
      printf("31 DAYS");
    }
  else if(mon==4)
    {
      printf("It's APRIL \n");
      printf("30 DAYS");
    }
  else if(mon==5)
    {
      printf("It's MAY \n");
      printf("31 DAYS");
    }
  else if(mon==6)
    {
      printf("It's JUNE \n");
      printf("30 DAYS");
    }
  else if(mon==7)
    {
      printf("It's JULY \n");
      printf("31 DAYS");
    }
  else if(mon==8)
    {
      printf("It's AUGUST \n");
      printf("31 DAYS");
    }
  else if(mon==9)
    {
      printf("It's SEPTEMBER \n");
      printf("30 DAYS");
    }
  else if(mon==10)
    {
      printf("It's OCTOBER \n");
      printf("31 DAYS");
    }
  else if(mon==11)
    {
      printf("It's NOVERMBER \n");
      printf("30 DAYS");
    }
  else if(mon==12)
    {
      printf("It's DECEMBER \n");
      printf("31 DAYS");
    }
  else
    {
      printf("INVALID INPUT !");
    }

  getch();
}
