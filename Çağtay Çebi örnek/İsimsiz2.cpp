/*
Girilen tam say�n�n 
10'dan b�y�k olup 
olmad���n� s�yleyen 
program
*/
#include<stdio.h>
int main( void )
{
	int sayi;
	printf("L�tfen bir say� giriniz> ");
	scanf("%d",&sayi);
	( sayi > 10 ) ? printf("Say� 10'dan b�y�kt�r\n"):
			printf("Say� 10'dan k���kt�r veya 10'a e�ittir\n");
	return 0;
}
