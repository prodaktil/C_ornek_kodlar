#include<stdio.h>
int main (){
	float x,y;
	int a;
	while(1)
{
	printf("\nilk  sayýyýgirin \n");
	scanf("%f",&x);
	printf("ikinci sayiyi girin \n");
	scanf("%f",&y);
	printf("\nistediginiz islemi seciniz:\ntoplama=1\ncikartma=2\ncarpma=3\nbolme=4\n");
	scanf("%d",&a);
	if (a==1){
		printf("sonuc:\n");
		printf("%f",x+y);
	}
	if (a==2){
		printf("sonuc:");
		printf("%f",x-y);
	}
	if (a==3){
		printf("sonuc:");
		printf("%f",x*y);
	}
	if (a==4){
		printf("sonuc:");
		printf("%f",x/y);
	}
}
}
