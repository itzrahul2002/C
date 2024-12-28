#include <stdio.h>
#include <conio.h>
void main()
{
  int num1,num2;
  printf("\n\n\t\t\t------------Find Equal or Not-----------\n\n");
  printf("Enter a first number : ");
  scanf("%d",&num1);
  printf("Enter a first number : ");
  scanf("%d",&num2);

  if(num1==num2)
    {
      printf("Both Number are Equal");
    }
  else
    {
      printf("Both Number are Not Eqaul");
    }

  getch();
}
