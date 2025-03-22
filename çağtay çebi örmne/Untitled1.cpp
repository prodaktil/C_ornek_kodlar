#include<stdio.h>

// Verilen sayinin asal olup olmadigina 
// bakar. Sayi asalsa, geriye 1 aksi hâlde
// 0 degeri doner. 
int sayi_asal_mi( int sayi )
{

		if(sayi%2){
			
	 return 0;
}
		else{
	return 5;
}
}

// main fonksiyonu
int main( void )
{
	int test_sonucu;
	int girilen_sayi;
		printf( "Lütfen bir sayý giriniz> " );
		scanf( "%d",&girilen_sayi );
		test_sonucu = sayi_asal_mi( girilen_sayi );
		printf("%d",test_sonucu);

}

