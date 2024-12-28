#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------------SQUARE & SUM--------------\n\n\n");
  int num,sum=0;
  printf("Enter a number :");
  scanf("%d",&num);

  for(int i=1; i<=num; i++)
    {
      printf("%d Square of ",i);
      printf("%d\n",i*i);
      sum+=(i*i);
    }
    printf("Sum is : %d",sum);

  getch();
}
