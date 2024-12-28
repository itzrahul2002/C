#include <stdio.h>
#include <conio.h>

void main ()
{
  printf("\n\n\t\t\t\t\t----------------AVERAGE & SUM--------------\n\n\n");
   int num;
    int sum=0;
    printf("Enter a number :");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
      {
        scanf("%d",&num);
        sum+=num;
      }
    printf("sum is %d\n",sum);
    double avg;
    avg=sum/10.0;

    printf("Average is %lf",avg);

    getch();
}
