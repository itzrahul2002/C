#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------GRADE---------------\n\n\n\n");
  int day;
  printf("Enter A Day Number :");
  scanf("%d",&day);

  if(day==1)
    {
      printf("MONDAY");
    }
  else if(day==2)
    {
      printf("TUESDAY");
    }
  else if(day==3)
    {
      printf("WEDNESDAY");
    }
   else if(day==4)
    {
      printf("THRUSDAY");
    }
   else if(day==5)
    {
      printf("FRIDAY");
    }
   else if(day==6)
    {
      printf("SATURDAY");
    }
  else if(day==7)
    {
      printf("SUNDAY");
    }
  else
    {
      printf("INVALID INPUT !");
    }

  getch();
}
