#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------GRADE---------------\n\n\n\n");
  char grade;
  printf("Enter A Grade :");
  scanf("%c",&grade);

  if(grade=='E'||grade=='e')
    {
      printf("Excellent");
    }
  else if(grade=='V'||grade=='v')
    {
      printf("Very Good");
    }
  else if(grade=='G'||grade=='g')
    {
      printf("Good");
    }
  else if(grade=='A'||grade=='a')
    {
      printf("Average");
    }
  else if(grade=='F'||grade=='f')
    {
      printf("Fail");
    }
  else
    {
      printf("INVALID INPUT !");
    }

  getch();
}

