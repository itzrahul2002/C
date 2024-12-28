#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------------TABLE--------------\n\n\n");
  int num;
  printf("Enter A Number :");
  scanf("%d",&num);

  for(int i=1;i<=10;i++)
    {
      printf("%d x %d = %d\n",num,i,num*i);
    }
  getch();
}
