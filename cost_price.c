/*If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item.*/

#include<stdio.h>
int main()
{
  int sp,cp,profit,cp_1;
  printf("\nEnter the selling price of 15 items : ");
  scanf("%d",&sp);
  printf("\nEnter the profit earned : ");
  scanf("%d",&profit);

  //profit =  selling_price - cost_price;
  cp = sp-profit;
  //cost price of 1 item = cost price/15;
  cp_1 = cp/15;
  printf("\nCost price of 1 item is : %d",cp_1);

}