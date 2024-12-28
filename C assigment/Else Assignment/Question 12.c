#include <stdio.h>
#include <conio.h>

void main()
{
  float angle1,angle2,angle3,sum;
  printf("\n\n\t\t\t\t\t---------------TRIANGLE DEGREE---------------\n\n\n\n");
  printf("Enter First Angle Of Triangle :");
  scanf("%f",&angle1);
  printf("Enter Second Angle Of Triangle :");
  scanf("%f",&angle2);
  printf("Enter Third Angle OF Triangle :");
  scanf("%f",&angle3);
  sum=angle1+angle2+angle3;

  if(sum==180 && angle1>0 && angle2>0 && angle3>0)
    {
      printf("Your Sum Angle Is %.0f\n",sum);
      printf("YES Triangle Can be Formed");
    }
  else
    {
      printf("Your Sum Angle Is %.0f\n",sum);
      printf("NO Triangle Can't be Formed");
    }

  getch();
}
