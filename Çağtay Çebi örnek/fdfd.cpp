#include<stdio.h>
int main( void )
{
	int sum;
	float average;
	int weight_1, weight_2;
	printf( "1.agirlik> " );
	scanf( "%d", &weight_1 );
	sum += weight_1;
	printf( "2.agirlik> " );
	scanf( "%d", &weight_2 );
	sum += weight_2;
	average = sum / 2;
	printf( "Ortalama: %.2f\n", average );
	return 0;	
}
