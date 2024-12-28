#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------------All Prime Number--------------\n\n\n");
  int num,end,count;
  count=0;
  printf("Enter a Initial Number :");
  scanf("%d",&num);
  printf("Enter a Last Number :");
  scanf("%d",&end);
  for(int i=num;i<=end;i++)
    {
      if(i%2==0)
        {
          count++;
          if(count==2)
            {
              printf("%d",i);
            }
        }
    }
   // printf("%d",count);


    getch();
}
