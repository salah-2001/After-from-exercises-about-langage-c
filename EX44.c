#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 		int n,c;
 	float m,p,f,a,h,s;
 	
 	          // m: math et p:physique et f:francais et a:anglais et h: histoir
 	          
 	 printf("le nombre de etudent :");
 	 scanf("%d",&n);
 	 
 	      for(c=1 ; c<=n ; c++)
 	 {
 	 	 printf(" etudent :%d \n ",c);
 	 	     
 	 	                 // la note de matieres
 	 	           
 	                 	printf("la note de math : ");
 	 	                  scanf("%f", &m);	 	         
 	 	            printf("la note de physique : ");
 	 	                scanf("%f", &p);	         
 	 	         	   printf("la note de francais : ");
 	 	                   scanf("%f", &f);
 	 	        	printf("la note de anglais : ");
 	 	                scanf("%f", &a);
 	 	         	  printf("la note de histoir :  ");
 	 	                   scanf("%f", &h);
 	 	                   
 	 	                   // la moyenne des note des cinq matieres 
 	 	                   
 	             s = s+n;
				 }           
 	 	   
 	              m=s/18;
	  printf("la meyenne est : %.2f \n ",m);

	  
	 
	return 0;
}
