#include <stdio.h>
#include <stdlib.h>
int multiplucateur(int a ,int p, int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float p,n,a ;
	
	       // p : prix HT et n : nombre d'articles et a : taux TVA et t : prix TTC
	       
	 printf("le prix HT :");
	 scanf("%f",&p);
	   printf("nombre d'articles' :");
    	 scanf("%f",&n);
	       printf("taux TVA :");
	         scanf("%f",&a);
	         
	                
	             int multiplucateur(a,p,n);
	         
	return 0;
}
// le prix total TTC
int multiplucateur(int a ,int p, int n)
{
	int t;
	 t = n * p * ( 1 + a) ;
	            printf("le prix total :%.2f ",t);
}
