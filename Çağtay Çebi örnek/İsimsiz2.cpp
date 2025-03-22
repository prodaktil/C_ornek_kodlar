/*
Girilen tam sayýnýn 
10'dan büyük olup 
olmadýðýný söyleyen 
program
*/
#include<stdio.h>
int main( void )
{
	int sayi;
	printf("Lütfen bir sayý giriniz> ");
	scanf("%d",&sayi);
	( sayi > 10 ) ? printf("Sayý 10'dan büyüktür\n"):
			printf("Sayý 10'dan küçüktür veya 10'a eþittir\n");
	return 0;
}
