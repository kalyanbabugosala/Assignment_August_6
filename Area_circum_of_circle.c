#include <stdio.h>
//if we define PI_value as macro it will take 1.672 time to execute.so it is better than other declarations.
#define PI_VALUE 3.14  //if it is declared as type const type it will take 2.419 time ,declared as float type it will take 1.703.
                       
int main()
{
   int radius;
   float area, circumf;
   printf("\nEnter radius of circle: ");
   scanf("%d",&radius);
   area = PI_VALUE * radius * radius;
   printf("\nArea of circle is: %f",area);
   circumf = 2 * PI_VALUE * radius;
   printf("\nCircumference of circle is: %f",circumf);

   return(0);
}

