#include<stdio.h>
int main(){
	int x;
	int y=1;
	int a;
	int b=1;
	int d;
	printf("permitasyon alma programina hos geldiniz \n   ilk sayiyi girin");
	scanf("%d",&x);
	printf("\n ikinci sayiyi girin");
	scanf("%d",&d);
	if(d>x){
		printf("\n HATA \n ikinci sayi ilk sayidan buyuk olamaz");
	}
		printf("",d=x-d);
	while(d>1){
		printf("",b=b*d);
		printf("",d=d-1);
	}
	while(x>1){
		printf("",y=y*x);
		printf("",x=x-1);
	}
	printf("\n sonuc %d",y/b);
	return 0;
	scanf("%d");
	}
