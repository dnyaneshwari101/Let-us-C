/*A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer. */

#include<stdio.h>
int main()
{
    int amt,notes_of_50=0,notes_of_100=0,notes_of_10=0,change=0;
    printf("\nEnter the amout to be withdrawn : ");
    scanf("%d",&amt);
    if(amt<100)
        printf("\nThe amount to be withdrwan should be more than 100 Rs.");
    else
    {
       notes_of_100=amt/100;
       amt=amt-notes_of_100*100;
       
       notes_of_50 = amt/50;
       amt = amt - notes_of_50 * 50; 
       
       notes_of_10 = amt/10;
       amt = amt - notes_of_10 * 10; 
       printf("\nNotes of 100 : %d\nNotes of 50 : %d\nNotes of 10 : %d\n",notes_of_100, notes_of_50, notes_of_10);
    }

}