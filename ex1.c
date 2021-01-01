#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n,i,p;
	printf("nombre et :");
	scanf("%d",&n);
	for(i=0;i<=10;i++){
	
		printf("%d*%d=%d\n",i,n,i*n);
	}
	return 0;
}
