#include <stdio.h>
#include <conio.h>

void main()
{
  printf("\n\n\t\t\t\t\t---------------SIMPLE CALCULATOR---------------\n\n");
  int num1,num2,opt;
  printf("Press 1 For Addition \n");
  printf("Press 2 For Subtraction \n");
  printf("Press 3 For Multiplication \n");
  printf("Press 4 For Division \n");
  printf("Press 5 For Reminder \n");
  printf("Enter Your Choices (1 - 5) :");
  scanf("%d",&opt);


  switch(opt)
  {
    case 1:
      printf("Enter A First Number :");
      scanf("%d\n",&num1);
      printf("Enter A Second Number :");
      scanf("%d\n",&num2);
      printf("%d + %d = %d ",num1,num2,(num1+num2));
      break;
    case 2:
      printf("Enter A First Number :");
      scanf("%d\n",&num1);
      printf("Enter A Second Number :");
      scanf("%d\n",&num2);
      printf("%d - %d = %d ",num1,num2,(num1-num2));
      break;
    case 3:
      printf("Enter A First Number :");
      scanf("%d\n",&num1);
      printf("Enter A Second Number :");
      scanf("%d\n",&num2);
      printf("%d * %d = %d ",num1,num2,(num1*num2));
      break;
    case 4:
      printf("Enter A First Number :");
      scanf("%d\n",&num1);
      printf("Enter A Second Number :");
      scanf("%d\n",&num2);
      printf("%d / %d = %d ",num1,num2,(num1/num2));
      break;
    case 5:
      printf("Enter A First Number :");
      scanf("%d\n",&num1);
      printf("Enter A Second Number :");
      scanf("%d\n",&num2);
      printf("%d %% %d = %d ",num1,num2,(num1%num2));
      break;
    default:
      printf("INAVLID INPUT NUMBER DATA ! \n");
  }
  getch();
}
