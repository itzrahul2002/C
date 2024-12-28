#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------SHAPES CALCULATOR---------------\n\n");
  float squ,tri,cir,rect,side,l,b,r,ba,h;
  int choice;
  printf("Press 1 for Square Area \n");
  printf("Press 2 for Rectangle Area \n");
  printf("Press 3 for Circle Area \n");
  printf("Press 4 For Triangle Area \n");

  printf("Enter A Choices (1 - 4) :");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:
      printf("Enter A Side Of Square : ");
      scanf("%f",&side);
      printf("Area Of Square Is : %.0f",(side*side));
      break;

    case 2:
      printf("Enter A Length Of Rectangle :");
      scanf("%f",&l);
      printf("Enter A Height Of Rectangle :");
      scanf("%f",&b);
      printf("Area Of Rectangle : %.0f",(l*b));
      break;

    case 3:
      printf("Enter A Radius Of Circle :");
      scanf("%f",&r);
      printf("Area Of Circle Is :%.0f",3.14*(r*r));
      break;

    case 4:
      printf("Enter A Base Of Triangle :");
      scanf("%f",&ba);
      printf("Enter A Height Of Triangle :");
      scanf("%f",&h);
      printf("Area Of Triangle Is : %.0f",(ba*h)/2);
      break;

    default:
      printf("INAVLID INPUT DATA !");
  }

  getch();
}
