#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------PROFIT OR LOSS---------------\n\n\n\n");
  float unit;
  printf("Enter Electricity Bill Unit :");
  scanf("%f",&unit);

  if(unit<=199)
    {
      printf("Your Bill is %.2f\n",unit*1.20);
    }
  else if(unit>=200 && unit<=400)
    {
      printf("Your Bill is %.2f\n",unit*1.50);
    }
  else if(unit>=400 && unit<=600)
    {
      printf("Your Bill is %.2f\n",unit*1.80);
    }
  else if(unit>600)
    {
      printf("Your Bill is %.f\n",unit*2.00);
    }
  else
    {
      printf("INVALID UNIT BILL !");
    }

  getch();
}
