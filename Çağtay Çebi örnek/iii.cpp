/*
0 ile 99 aras�nda tesad�fi say�lar �reten 
bir program�n, ka��nc� seferde 61 say�s�n�
bulaca��n� yazan program a�a��dad�r.
*/
#include<stdio.h>
int main( void )
{
	int i,tesadufi_sayi;
	int deneme_sayisi = 0;
	//while i�inde 1 oldu�undan sonsuza kadar d�ng� �al���r.
	while( 1 ){
		//tesadufi_sayi de�i�kenine, 0 ile 99 aras�nda 
		//her seferinde farkl� bir say� atan�r.
		//rand( ) fonksiyonu tesad�fi say� atamaya yarar.
		//mod 100 i�lemiyse, atanacak say�n�n 0 ile 99
		//aras�nda olmas�n� garantiler.
		tesadufi_sayi = rand;
		//D�ng�n�n ka� defa �al��t���n� deneme_sayisi
		//de�i�keniyle buluruz.
		deneme_sayisi++;
		//E�er tesadufi say� 61'e e�it olursa, 
		//d�ng� k�r�l�p, sonland�r�l�r.
		if( tesadufi_sayi == 61 ) break;
	}
	printf("Toplam deneme say�s�: %d\n",deneme_sayisi);
	return 0;
}	
