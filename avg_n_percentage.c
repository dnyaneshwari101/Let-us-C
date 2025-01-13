/*If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100. */
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float avg,per;
    printf("\nEnter marks of 5 subjects  out of 100 : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    int total = m1+m2+m3+m4+m5;
    avg = total/5.0;
    per= (total/500.0)*100;
    printf("\nYour average is : %.2f",avg);
    printf("\nYour percentage is : %.2f",per);

}

/* 
Points to be noted : 
1.
int total, avg;
flost avg, per;

avg = total / 5;
total is an integer, and dividing it by 5 results in integer division. While storing this result in a float variable (avg), the fractional part is already lost.

2.per = (total / 500) * 100;
(total / 500) is integer division. Since total and 500 are integers, the result will always be 0 for values of total less than 500. This leads to an incorrect percentage calculation.
*/