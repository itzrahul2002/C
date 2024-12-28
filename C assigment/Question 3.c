#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------------NATURAL NUMBER & SUM--------------\n\n\n");
  int num1,sum=0;
  printf("Enter Your Number :");
  scanf("%d",&num1);

  for(int i=1;i<=num1;i++)
    {
      printf("%d\n",i);
      sum+=i;
    }
  printf("Your Total Sum of Natural Number is %d : ",sum);

  getch();
}
