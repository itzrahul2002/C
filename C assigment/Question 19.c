#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t--------------Palindrome or Not----------------\n\n\n");
  int num,temp,sum=0,rem;
  printf("Enter a Number :");
  scanf("%d",&num);

  while(num>0)
    {
      rem=num%10;
      sum*=10+rem;
      num/=10;
    }
  if(num==sum)
    {
      printf("It is Pallindrome %d",num);
    }
  else
    {
      printf("It is Not Pallindrome %d",num);
    }

  getch();
}


