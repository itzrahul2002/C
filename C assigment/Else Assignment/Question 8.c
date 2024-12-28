#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t----------Eligibility Criteria For Admission----------\n\n");
  int phy,chem,math,total;
  printf("Enter Your Physics Marks :");
  scanf("%d",&phy);
  printf("Enter Your Chemistry Marks :");
  scanf("%d",&chem);
  printf("Enter Your Maths Marks :");
  scanf("%d",&math);
  total=math+chem+phy;

  if(phy>=55 && chem>=50 && math>=65 && total>=190)
    {
        printf("Your Total Marks Is : %d\n",total);
        printf("You Are Eligible For Admission");
    }
  else
    {
      printf("Your Total Marks Is : %d\n",total);
      printf("You Are Not Eligible For Admission");
    }

  getch();
}
