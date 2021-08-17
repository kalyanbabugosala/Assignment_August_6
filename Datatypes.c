#include <stdio.h>
int main()
{
    int a = 4000; // positive integer data type
    int f = -185; // -ve integer data type
    float b = 5.2324; // float data type
    float j = -3.55; // float data type
	double i = 4.1234567890; // double float data type
	char c = 'Z'; // char data type
    long d = 41657; // long positive integer data type
    long e = -21556; // long -ve integer data type
    short g = 130; // short +ve integer data type
    short h = -130; // short -ve integer data type
    
    
    
    printf("%d",sizeof(int));
    printf("\n%d",sizeof(long));
  return 0;
}

/*
Data Type 
 	Memory (bytes) 
 	Range 
 	Format Specifier 
 
short int 
 	2 
 	-32,768 to 32,767 
 	%hd 
 
unsigned short int 
 	2 
 	0 to 65,535 
 	%hu 
 
unsigned int 
 	4 
 	0 to 4,294,967,295 
 	%u 
 
int 
 	4 
 	-2,147,483,648 to 2,147,483,647 
 	%d 
 
long int 
 	4 
 	-2,147,483,648 to 2,147,483,647 
 	%ld 
 
unsigned long int 
 	4 
 	0 to 4,294,967,295 
 	%lu 
 
long long int 
 	8 
 	-(2^63) to (2^63)-1 
 	%lld 
 
unsigned long long int 
 	8 
 	0 to 18,446,744,073,709,551,615 
 	%llu 
 
signed char 
 	1 
 	-128 to 127 
 	%c 
 
unsigned char 
 	1 
 	0 to 255 
 	%c 
 
float 
 	4 
 	%f 
 
double 
 	8 
 	%lf 
 
long double 
 	16 
 	%Lf  
*/
