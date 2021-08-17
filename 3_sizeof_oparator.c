/*SIZEOF OPERATER
	The sizeof() is a compile time operator & when used with an operand, it returns the number of bytes the operand occupies. The operand may be a variable, a constant or a data type qualifier Ex: m=sizeof (sum);
	n=size of (float); -4
	k=size of(23); -2 */	 	   
	
#include<stdio.h>
#include<stdlib.h>
void main()
{ 
   int a,b;
   clrscr();
   printf("%d",sizeof(a));
   printf("%d",sizeof(b));
   printf("%d",sizeof(a+b));
   getch();
} 
