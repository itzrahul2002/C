#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    printf("\n\n\t\t\t\t\t----------------Armstrong Number--------------\n\n\n");
    int num,temp,rem,count=0,sum=0,temp1;
    printf("Enter a Number : ");
    scanf("%d",&num);

    for(temp1=num;temp1>0;temp1/=10)
      {
        count++;
      }
    for(temp=num;temp>0;temp/=10)
      {
        rem=temp%10;
        sum=sum+pow(rem,count);
      }
    if(sum==num)
      {
        printf("Number is Armstrong : %d",num);
      }
    else
      {
        printf("Number is  Not Armstrong : %d",num);
      }
    getch();
}
