#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------REPORT CARD---------------\n\n\n\n");
  int rollno,phy,chem,comp,total,div;
  char name;
  float per;
  printf("Enter Your Name :");
  scanf("%s",&name);
  printf("Enter Your Roll No :");
  scanf("%d",&rollno);
  printf("Enter Your Physics Marks :");
  scanf("%d",&phy);
  printf("Enter Your Chemistry Marks :");
  scanf("%d",&chem);
  printf("Enter Your Computer Application Marks :");
  scanf("%d",&comp);
  total=phy+chem+comp;
  //per=total/300*100;
  per=(float)total/300*100;
  printf("Your Percentage is :%.2f\n",per);
  printf("Your Total Marks Is :%d\n",total);

  if(total>=150 && total<=200)
    {
      printf("You Got A III Division");
    }
  else if(total>200 && total<=250)
    {
      printf("You Got A II Division");
    }
  else if(total>=250 && total<=300)
    {
      printf("You Got A I Division");
    }
  else
    {
      ("PLEASE ENTER A VALIID DATA");
    }

  getch();
}
