//logical operators
	 
#include < stdio.h>
#include < conio.h>
void main()
{
     int x, y;
     clrscr();
     printf("Enter the vales in  x and y\n");
     scanf("%d%d", &x, &y);
     printf("Value of (x= =y)&&(x>y) is %d",(x= =y)&&(x>y));
     printf("Value of (x==y)||(x>y) is %d", (x==y)||(x>y));
     printf("Value of !((x>y)&&(x<=y)) is %d", !((x>y)&&(x<=y)));
     getch();
}
