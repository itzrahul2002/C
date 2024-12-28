#include <stdio.h>
#include <conio.h>
void main()
{
  printf("\n\n\t\t\t\t\t----------FIND POSITIVE & NEGATIVE----------\n\n");
  int num;
  printf("Enter A Number :");
  scanf("%d",&num);

  if(num>0)
    {
      printf("It is a Positive Number :%d\n",num);
    }
  else if(num<0)
    {
      printf("It is Negative Number :%d\n",num);
    }
  else if(num==0)
    {
      printf("It id Zero : %d\n",num);
    }
  else
    {
      printf("INVALID INPUT !");
    }

  getch();
}
