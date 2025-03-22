#include<stdio.h>
int main( void )
{
	float a,b,c;
	printf("ilk sayýyý girin:");
	scanf("%f",&a);
	printf("ýkýnci sayýyý girin:");
	scanf("%f",&b);
	printf("ucuncu sayýyý girin:");
	scanf("%f",&c);
	if(a>b && a>c){
		printf("en buyuk sayý %f",a);
	}
	else if(b>a && b>c){
		printf("en buyuk sayý %f",b);
	}
	else if(c>b && c>a){
		printf("en buyuk sayý %f",c);
	}
}
