/* In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number 
of illiterate men and women if the population of the town is 
80,000. */
#include<stdio.h>
int main()
{
    int total_population =  80000;
    //total literacy = 48%
    //total illiteracy = 52% (illiterate men+ illiterate women)
    int no_of_literate_people = total_population * 48/100;
    //literate men=35% of total population
    int no_of_literate_men = total_population*35/100;
    //literate women = total literate people - total literate men
    int no_pf_literate_women = no_of_literate_people - no_of_literate_men;
    printf("\nNo. of literate men is : %d\nNo. of literate women is : %d",no_of_literate_men,no_pf_literate_women); 

}