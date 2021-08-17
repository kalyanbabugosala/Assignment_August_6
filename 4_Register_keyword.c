#include<stdio.h>
int main()
{
    // declaring a register variable
	register char b = 'G';//it has the same functionality of auto variables but 
	                      //the defference is that the compiler tries to store these 
						  //variables in the microprocessor registersif a free register is available.
                          //otherwise it will store in memory.
	// printing the register variable 'b'
	printf("Value of the variable 'b'"
		" declared as register: %c\n",
		b);
		
    int *ptr=&b;//address of the register variables are not accessable.
    printf("%d",*ptr);
}
	
