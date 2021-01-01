#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	    // a et b  deux nombre
 	int a,b;
 	       printf("la valeur a:");
 	            scanf("%d",&a);
 	       printf("la valeur b:");
 	            scanf("%d",&b);
 	if(a<0 && b<0)
 	       printf("la produit et positif");
 	    else
   if(a>0 && b>0)
 	       printf("la produit et positif");
 
 	    else
 	    	if(a>0||b>0)
 	printf("la produit et negatif");
 	   else
 	    	printf("la produit est nul");
	return 0;
}
