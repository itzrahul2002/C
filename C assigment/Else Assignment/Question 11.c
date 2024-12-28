#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------TYPES OF TRIANGLE---------------\n\n\n\n");
  float AB,AC,BC;
  printf("Enter A First Side OF Your Triangle :");
  scanf("%f",&AB);
  printf("Enter A second SIde Of Your Triangle :");
  scanf("%f",&AC);
  printf("Enter A Third Side oF your Triangle :");
  scanf("%f",&BC);

  if(AB==BC && AB==AC && BC==AC)
    {
      printf("It's Is a Equilateral Triangle");
    }
  else if(AB==AC || BC==AC || AB==BC)
    {
      printf("It's Is a Isosceles Triangle");
    }
  else if(AB!=BC&& AB!=AC)
    {
      printf("It's Is Scalene Triangle");
    }
  else
    {
      printf("INAVLID TRIANGLE SIDE INPUT !");
    }
}
