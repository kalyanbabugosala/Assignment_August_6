 //Assignment operators "=" act as assignment operator and also we have other type of assignment operators available
     //Compound assignment operators (or) Shorthand assignment operators: "+=,-=,*=,/=,%=*
     x+=y+1;
	//This is same as the statement
			x=x+(y+1);
				//The shorthand operator += means ‘add y+1 to x’ or ‘increment x by y+1’.For y=2,the above statement becomes
					x+=3;
	
	//Increment & Decrement operators
    //‘C’ has 2 very useful operator not generally found in other language. They are increment & decrement operators (++ & --).The operator ++ add 1 to operand while -- subtracts 1.Both are unary operators and take following form.
	++a & a++;
	--a & a--;
	//(Pre decrement) & (post decrement)
	++a; //is equivalent to a=a+1;(or a+=1)
	--b; //is equivalent to b=b-1;(or b-=1)
	
	
	//Bitwise logical operators: These operators are used for the Bit-wise logical decision making.
      // &-Bitwise logical AND
      // |-Bitwise logical OR
	  // ^-Bitwise logical exclusive OR 
	 
#include < stdio.h>
#include < conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("enter a,b");
    scanf("%d%d",&a,&b);
    printf("\n a&b = %d",a&b);
    printf("\n a|b =%d",a|b);
    printf("\n a^b =%d",a^b);
    getch();
}
 
		 
    /* Bit-wise shift operators
	Shift operator to be binary patterns and shift the bits to the left or right.
	<<-left shift;
	>>-right shift*/
      
#include < stdio.h>
#include < conio.h>
void main()
{
  int a,b,c;
  clrscr();
  c=(a=10,b=20,a+b);
  printf("\n a=%d",a);
  printf("\n b=%d",b);
  printf("\n c=%d",c);
  getch();
}
