/*If a five-digit number is input through the keyboard, write a 
program to reverse the number. */

#include<stdio.h>
int main()
{
    int num,rev_num=0,reminder;
    printf("\nEnter a 5 digit number : ");
    scanf("%d",&num);
    //validate if the number is a 5 digit number
    if(num>=10000 && num<=99999)
    {
        while(num>0)
        {
        reminder=num%10;
        rev_num=rev_num*10 + reminder;
        num=num/10;
        }
        printf("\nReverse of %d is : %d",num,rev_num);

    }
    else{
        printf("\nEnter a valid 5 digit number");
    }
    
}