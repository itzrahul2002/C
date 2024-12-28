#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t--------------Fibonacci Series----------------\n\n\n");

  int num,a=-1,b=1,next;
  printf("Enter a Number :");
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
    {
      next=a+b;
      printf("%d ",next);
      a=b;
      b=next;
    }
  getch();
}
