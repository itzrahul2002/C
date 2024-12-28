#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------PROFIT OR LOSS---------------\n\n\n\n");
  int cp,sp,pro,los;
  printf("Enter a Cost Price :");
  scanf("%d",&cp);
  printf("Enter a Selling Price :");
  scanf("%d",&sp);
  pro=sp-cp;
  los=cp-sp;
  if(sp>cp)
    {
      printf("Your have Profit of : %d\n",pro);
    }
  else if(sp<cp)
    {
      printf("You have Loss of : %d\n",los);
    }
  else
    {
      printf("You Have No Profit Or Not Loss");
    }

  getch();
}
