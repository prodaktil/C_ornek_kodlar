#include<stdio.h>
int main( void )
{
int a,b,x;
printf("kac tane olsun:\n");
scanf("%d",&x);
for(a=0; a<x; a++){
	for(b=0; b<a+1 ; b++){
		printf("* ");
	}
	printf("\n");
}
}
