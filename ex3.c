#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
		int n,i,p=1;
 	printf("valeur nombre :");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	p=p*i;
 	printf("la factorielle et :%d",p);
	return 0;
}
