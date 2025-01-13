#include<stdio.h>
int main()
{
  int p,n;
  float si,r;
  printf("\nEnter the principle amount, rate of interest and, no. of years : ");
  scanf("%f%f%f",&p,&r,&n);
  si = (p*r*n)/100;
  printf("\nSimple interest is : %f ",si);
}