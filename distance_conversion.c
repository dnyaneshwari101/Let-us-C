/*The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters. */

#include<stdio.h>
int main()
{
float d,dist;
int choice;

    printf("\nEnter the distance (in km) : ");
    scanf("%f",&d);
while(1)
{
    printf("\n1.km to m\n2.km to feet\n3.km to inches\n4.km to cm\n5.Exit\n");
    printf("\nEnter your choice for conversion : ");
    scanf("%d",&choice);
    switch(choice)
    {
        //km to m
        case 1: dist=d*1000;
                printf("\n%.2f km = %.2f m",d,dist);
                break;
        
        //km to feet
        case 2: dist = d*3280.839895;
                printf("\n%.2f km = %.2f feet",d,dist);
                break;

        //km to inches
        case 3: dist = d*39370.0787;
                printf("\n%.2f km = %.2f inches",d,dist);
                break;

        //km to cm
        case 4: dist = d*100000;
                printf("\n%.2f km = %.2f cm",d,dist);
                break; 

        case 5: return 0;
    }
    printf("\n----------------------------------------------------");
}

}