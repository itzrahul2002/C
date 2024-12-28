#include <stdio.h>
#include <conio.h>
void main()
{
  float height,feet;
  printf("\n\n\t\t\t\t\t----------HEIGTH CATEGORIZE----------\n\n");
  printf("Enter Your Height :");
  scanf("%f",&height);
  feet=height/30.48;

  if(feet>=0 && feet<=3)
    {
      printf("Your Height is :%.2f\n",feet);
      printf("Your Are In Short Category");
    }
  else if(feet>=3 && feet<=6)
    {
      printf("Your Height is :%.2f\n",feet);
      printf("Your Are In Medium Category");
    }
  else if(feet>=6 && feet<=8)
    {
      printf("Your Height In feet %.2f\n",feet);
      printf("You are In Tall Category");
    }
  else
    {
      printf("INVALID HEIGHT INPUT !");
    }

  getch();
}

