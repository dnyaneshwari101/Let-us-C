/*The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle. */

#include<stdio.h>

void input_rectangle(float *l, float *b)
{
 printf("\nEnter the length and breadth of rectangle : ");
 scanf("%f%f",l,b);
}
void input_circle(float *r)
{
 printf("\nEnter the radius of circle : ");
 scanf("%f",r);
}
void area_of_rectangle(float l, float b)
{
    float area = l*b;
    printf("\nArea of rectangle is : %.2f",area);
}
void area_of_circle(float r)
{
    float area = 3.14*r*r;
    printf("\nArea of circle is : %.2f",area);
}
void perimeter_of_rectangle(float l, float b)
{
    float p;
    p=2.0*(l+b);
    printf("\nPerimeter of rectangle is : %.2f",p);
}
void circumference_of_circle(float r)
{
   float c = 2*3.14*r;
   printf("\nCircumference of circle is : %.2f",c);
}
int main()
{
    float l,b,r;
    int choice;
    while(1)
    {
        printf("\n1.Calculate area of a rectangle\n2.Calculate perimeter of a rectangle\n3.Calculate area of a circle\n4.Calculate the circumference of a circle\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: input_rectangle(&l,&b);
                    area_of_rectangle(l,b);
                    break;

            case 2: input_rectangle(&l,&b);
                    perimeter_of_rectangle(l,b);
                    break;

            case 3: input_circle(&r);
                    area_of_circle(r);
                    break;

            case 4: input_circle(&r);
                    circumference_of_circle(r);
                    break;

            case 5: return 0;
            
            default: printf("\nEnter a valid choice!");
                     break;

        }
        printf("\n----------------------------------------------------------------------");
    }

}
