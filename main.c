#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{       
             // n la valeur et v l'inverse de cette valeur
     float n,v;
     
         printf("la valeur de n :");
         scanf("%f",&n);
         
            // calcule l'inverse de cette valeur
            
     v = 1 / n ;
         printf("l'inverse de cette valeur et : %.2f ",v);
     
	return 0;
}
