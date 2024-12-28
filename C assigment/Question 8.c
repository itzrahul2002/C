#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------------FRACTIONAL VALUE--------------\n\n\n");
  int i,f=1,num;
  printf("Enter the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
    {
      f*=i;
    }
  printf("The Factorial of %d is: %d\n",num,f);

  getch();
}
