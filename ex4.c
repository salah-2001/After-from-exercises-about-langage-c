#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int n ,i,v,max ;
 	printf("  le nombre numéro  ");
 	scanf("%d",&n);
    i=1;
    	
    do
    {
    	printf("le nombre %d\t",i);
    				printf("lA Valeur est : ");
    	scanf("%d",&v);
    	i++;
    
	}while(i<=n);

	return 0;
}
