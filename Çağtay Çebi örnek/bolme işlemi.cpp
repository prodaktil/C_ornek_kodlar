#include<stdio.h>
int main( void )
{
	float a,b,c;
	printf("Bolunen sayiyi giriniz\n");
	scanf("%f",&a);
	printf("Bolen sayiyi giriniz\n");
	scanf("%f",&b);
	if(b==0){
		printf("bolen sayi 0 olmaz\n");
	}
	else{
	c=a/b;
	printf("sonuc %f\n",c);
}
}
