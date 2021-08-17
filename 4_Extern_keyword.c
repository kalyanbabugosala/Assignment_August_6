#include<stdio.h>

int main()
{
	// telling the compiler that the variable
	// z is an extern variable and has been
	// defined elsewhere (above the main
	// function)
    {
	extern int x;
    }
    int x;
	// printing the extern variables 'x'
	printf("Value of the variable 'x'"
		" declared as extern: %d\n",
		x);

	// value of extern variable x modified
	x = 2;

	// printing the modified values of
	// extern variables 'x'
	printf("Modified value of the variable 'x'"
		" declared as extern: %d\n",
		x);
}
	
