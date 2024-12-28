#include <stdio.h>
#include <conio.h>

void main()
{
    printf("\n\n\t\t\t\t\t----------------Number is Perfect Or Not--------------\n\n\n");
    int num,sum;
    sum=0;
    printf("Enter a Number :");
    scanf("%d",&num);

    for(int i=1;i<=num/2;i++)
      {
        if(num%i==0)
          {
            sum+=i;
          }
      }
      if(num==sum && num>0)
        {
          printf("This is Perfect Number %d",num);
        }
      else
        {
          printf("This is Not Perfect Number %d",num);
        }

      getch();
}
