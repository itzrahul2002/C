#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t--------------Reverse----------------\n\n\n");
  int num,rem,sum=0,temp;
  printf("Enter a Number :");
  scanf("%d",&num);
  temp=num;

  while(temp>0)
    {
      rem=temp%10;
      sum=sum*10+rem;
      temp/=10;
    }
    printf("Reverse is : %d ",sum);

  getch();
}

