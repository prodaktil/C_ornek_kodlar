#include<stdio.h>
int main( void )
{
	float a,b,c;
	printf("ilk say�y� girin:");
	scanf("%f",&a);
	printf("�k�nci say�y� girin:");
	scanf("%f",&b);
	printf("ucuncu say�y� girin:");
	scanf("%f",&c);
	if(a>b && a>c){
		printf("en buyuk say� %f",a);
	}
	else if(b>a && b>c){
		printf("en buyuk say� %f",b);
	}
	else if(c>b && c>a){
		printf("en buyuk say� %f",c);
	}
}
