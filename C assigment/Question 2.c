#include <stdio.h>
#include <conio.h>
void main()
{
 printf("\n\n\t\t\t\t\t----------------NATURAL NUMBER & SUM--------------\n\n\n");
 int sum=0;

 for(int i=1;i<=10;i++)
  {
    printf("%d\n",i);
    sum+=i;
  }
  printf("Your Sum of 10 Naturals Number is %d",sum);

 getch();
}
