#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------------CUBE--------------\n\n\n");
  int num;
  printf("Enter A number For :");
  scanf("%d",&num);

  for(int i=0;i<=num;i++)
    {
      printf("%d\n",(i*i*i));
    }
  getch();
}

