#include <stdio.h>
#include <conio.h>
void main()
{
  printf("\n\n\t\t\t\t\t---------------WEATHER REPORTS---------------\n\n\n\n");
  float temp,Fahrenheit;
  printf("Enter Fahrenheit :");
  scanf("%f",&Fahrenheit);
  temp=(Fahrenheit-32)*5/9;

  if(temp<0)
    {
      printf("Temperature Is : %.2f\n",temp);
      printf("It's Is Freezing Weather");
    }
  else if(temp>=0 && temp<=10)
    {
      printf("Temperature Is : %.2f\n",temp);
      printf("It's Is Very Cold Weather");
    }
  else if(temp>=10 && temp<=20)
    {
      printf("Temperature Is : %.2f\n",temp);
      printf("It's Is Cold Weather");
    }
  else if(temp>=20 && temp<=30)
    {
      printf("Temperature Is : %.2f\n",temp);
      printf("It's Is Normal Weather");
    }
  else if(temp>=30 && temp<=40)
    {
      printf("Temperature Is : %.2f\n",temp);
      printf("It's A Hot Day");
    }
  else if(temp>=40)
    {
      printf("Temperature Is : %.2f\n",temp);
      printf("It's Is Very Hot Day");
    }
  else
    {
      printf("INVALID INPUT DATA !");
    }


  getch();
}
