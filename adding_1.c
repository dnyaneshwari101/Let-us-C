/*If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402. 
*/
#include<stdio.h>
int main()
{
  int num,rem,new_num=0,temp;
  printf("\nEnter a 5 digit number: ");
  scanf("%d",&num);
  if(num<10000 || num>99999)
  {
    printf("\nEnter a valid 5 digit number");
  }
  else{
    temp=num;
    for(int i=1;i<=10000;i=i*10)
    {
        rem = temp%10;
        rem=rem+1;
        new_num=new_num + rem*i;
        temp=temp/10;
    }
  }
                                          
  printf("\nNew number is : %d",new_num);

    
}