#include <stdio.h>
#include <conio.h>
void main()
{
	//Arithmetic operators
       int a, b ;
       printf("Enter two numbers");
       scanf("%d %d", &a, &b);
       printf("\n Addition of %d & %d is %d", a ,b , a + b);
       printf("\n Subtraction of %d & %d is %d", a ,b, a-b);
       printf("\n Multiplication of %d & %d is %d", a, b, a*b);
       printf("\n division of %d & %d is %d", a ,b, a/b);
       printf("\n remainder of %d & %d is %d", a, b, a % b);
       getch();
}
