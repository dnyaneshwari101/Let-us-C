/*(a) Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary. 
 */
#include<stdio.h>
int main()
{
    float basic_sal, gross_sal;
    printf("\nEnter Ramesh's basic salary : ");
    scanf("%f",&basic_sal);
    gross_sal=basic_sal;
    gross_sal=gross_sal-basic_sal*0.4;//substarcting dearness_allowance;
    gross_sal=gross_sal-basic_sal*0.2; //substracting house rent
    printf("Ramesh's gross salary is : %.2f",gross_sal);


}