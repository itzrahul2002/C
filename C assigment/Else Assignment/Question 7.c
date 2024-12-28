w#include <stdio.h>
#include <conio.h>
void main()
{
  printf("\n\n\t\t\t\t\t----------FIND LARGEST IN THREE NUMBER----------\n\n");
  double num1,num2,num3;
  printf("Enter Your first Number :");
  scanf("%lf",&num1);
  printf("Enter Your Second Number :");
  scanf("%lf",&num2);
  printf("Enter Your Third Number :");
  scanf("%lf",&num3);

  if(num1>num2 && num1>num3)
    {
      printf("This Number is Largest %.0lf",num1);
    }
  else if(num2>num1 && num2>num3)
    {
      printf("This Number is Largest %.0lf",num2);
    }
  else
    {
      printf("This Number is Largest %.0lf",num3);
    }

  getch();
}
