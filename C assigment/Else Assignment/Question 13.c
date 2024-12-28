#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------FIND ALPHABET OR DIGIT---------------\n\n\n\n");
  char ch;
  printf("Enter a Character :");
  scanf("%c",&ch);
  if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
      printf("It's Is an Alphabet %c\n",ch);
    }
  else if(ch>='0' && ch<='9')
    {
      printf("It's is a Digit %c\n",ch);
    }
  else
    {
      printf("It's Is a Special Character %c\n",ch);
    }

  getch();
}
