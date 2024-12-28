#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------------ODD & NATURAL SUM--------------\n\n\n");
  int num,sum=0;
  printf("Enter A Number :");
  scanf("%d",&num);

  for(int i=1;i<=num;i++)
    {
      if(i%2==1)
        {
          printf("%d,",i);
          sum+=i;
        }
    }
    printf("Sum of ODD Number %d\n",sum);

    getch();
}
