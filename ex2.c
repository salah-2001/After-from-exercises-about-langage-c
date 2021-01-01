#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int n,i,s=0;
 	printf("valeur nombre :");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	s=s+i;
 	printf("la some et :%d",s);
	return 0;
}
