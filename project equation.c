#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[])
{
               // equation ax^2 + bx + c = 0
	float a,b,c,e,x1,x2 ;
	printf("Values a:");
	scanf("%f",&a);
		printf("Values b:");
	scanf("%f",&b);
		printf("Values c:");
	scanf("%f",&c);
	             // b^2 - 4ac 
  	e = pow(b,2) - 4*a*c ;
	if(e>0)
	{
		x1 = (-b - sprt(e) / (2*a) );
		x2 = (-b + sprt(e) / (2*a) );
		printf("Values of x1: %.2f and of x2:%.2f",x1,x2);
	}
	else
	if(e==0)
	{
		x1 = -b / 2*a ;
		printf("Values of x1:%.2f",x1);
	}
	else
	               // e<0
	    printf("the equation has no solution in R");
	getche();
	return 0;
}
