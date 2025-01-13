/*If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number*/

#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("\nEnter a 4 digit number : ");
    scanf("%d",&num);
    //validate if the number is a 4 digit number
    if(num>=1000 && num<=9999)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/1000;
        sum=sum+num;
        printf("\nSum of the first and last digits  of %d is : %d",num,sum);
    }
    else{
        printf("\nEnter a valid 4 digit number");
    }
    
}