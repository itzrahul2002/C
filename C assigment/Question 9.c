#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------------FRACTIONAL VALUE--------------\n\n\n");
  int num,sum;
  sum=0;
  printf("Enter a Number :");
  scanf("%d",&num);

  for(int i=0;i<=num;i++)
    {
      if(i%2==0)
        {
          printf("%d,",i);
          sum+=i;
        }
    }

  printf("Sum of Even Number is %d",sum);

  getch();
}
