#include <stdio.h>
#include <conio.h>

void main()
{
    printf("\n\n\t\t\t\t\t----------------All Perfect Number--------------\n\n\n");
    int num,sum,first;

    printf("Enter a Initial Number :");
    scanf("%d",&first);
    printf("Enter a Final Number :");
    scanf("%d",&num);

    for(int i=first;i<=num;i++)
      {
        sum=0;
          for(int j=1;j<i;j++)
            {
              if(i%j==0)
                {
                  sum+=j;
                }
            }

          if(sum==i)
          {
            printf("Perfect Number is %d\n",i);
          }
      }


    getch();
}
