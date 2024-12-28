#include <stdio.h>
#include <conio.h>
void main ()
{
  printf("\n\n\t\t\t\t\t----------CASTING FOR VOTE OR NOT----------\n\n");
  int age;
  printf("Enter Your Age : ");
  scanf("%d",&age);

  if(age>=0 && age<=18)
    {
      printf("No You are Not Eligible for Vote");
    }
  else if(age>=18)
    {
      printf("YES You are Eligible For Vote");
    }
  else
    {
      printf("PLEASE ENTER YOUR VALID AGE");
    }

  getch();
}
