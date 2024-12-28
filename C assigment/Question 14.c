#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
  printf("\n\n\t\t\t\t\t---------------- All Armstrong Number--------------\n\n\n");

    int min,max,count,rem,temp,sum,temp1;
    printf("Enter a Minimum Number :");
    scanf("%d",&min);
    printf("Enter a Maximum Number :");
    scanf("%d",&max);

    for(int i=min;i<=max;i++)
      {
          temp=i;
          temp1=i;
          count=0;
        while(temp1>0)
          {
            temp1/=10;
            count++;
          }
          sum=0;
        while(temp>0)
          {
            rem=temp%10;
            sum+=pow(rem,count);
            temp/=10;
          }
          if(sum==i)
            {
              printf("%d ",i);
            }
      }

  getch();
}
