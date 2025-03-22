#include<stdio.h>
int main(){
	float b,x,c,e,k,t;
	float a=2;
	int d=5;
	int y;
	puts("katsayý olsun 1 \n katsay ýolmasýn 2");
	scanf("%d",&y);
	if(y==1){
	puts("ortalamasini almak istediniz sayiyi girin");
	scanf("%f",&b);
	puts("katsayýsýný girin");
	scanf("%f",&c);
	puts("\nortalamasini almak istediniz diger sayiyi girin\m");
	scanf("%f",&x);
	puts("katsayýsýný girin");
	scanf("%f",&k);
	printf("",b=(b*c+x*k)/(c+k));
	printf("\ngirdiniz sayilarin ortalamasi: ");
	printf("%f",b);
	printf("",t=c+k);
	while(d==5){
		puts("\nortalamasini almak istediniz diger sayiyi girin\m");
		scanf("%f",&x);
		puts("katsayýsýný girin");
		scanf("%f",&c);
		printf("",b=(b*t+x*c)/(t+c));
		printf("\ngirdiniz sayilarin ortalamasi: ");
		printf("",t=t+c);
		printf("%f",b);
		printf("",a=a+1);
		}
	scanf("%d");
	}
	if(y==2){
	puts("ortalamasini almak istediniz sayiyi girin");
	scanf("%f",&b);
	while(d==5){
		puts("\nortalamasini almak istediniz diger sayiyi girin\m");
		scanf("%f",&x);
		printf("",b=(b*(a-1)+x)/a);
		printf("\ngirdiniz sayilarin ortalamasi: ");
		printf("%f",b);
		printf("",a=a+1);
		}
	scanf("%d");
	}
}
