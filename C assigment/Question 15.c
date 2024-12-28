#include<stdio.h>
#include<conio.h>

void main()
{
    printf("\n\n\t\t\t\t\t----------------Prime Number--------------\n\n\n");
    int num,count;
    count=0;
    printf("Enter a Number :");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
      {
        if(num%i==0)
          {
            count++;
          }
      }
      if(count==2)
        {
          printf("It is Prime Number %d",num);
        }
      else
        {
          printf("It is Not a Prime Number %d",num);
        }

      getch();
}
