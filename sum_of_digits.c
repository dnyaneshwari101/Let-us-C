/* If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. */

#include<stdio.h>
int main()
{
  int a,sum=0,num;
  printf("\nEnter a 5 digit number: ");
  scanf("%d",&a);
  while(a>0)
  {
   num=a%10;
   sum=sum+num;
   a=a/10;
  }
  printf("\nSum of the digits od %d is : %d",a,sum);
}