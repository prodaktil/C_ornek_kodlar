#include<stdio.h>
int main(){
	int x;
	int y;
	int a;
	printf("kordinatlari girin \n");
	printf("\n x i girin\n");
	scanf("%d",&x);
	printf("\n y i girn \n");
	scanf("%d",&y);
	printf("  90 derece dondurmek icin 1  \n  180  derece dondurmek icin 2 \n 270 derece dondurmek icin 3 e bs�n \n");
	scanf("%d",&a);
	if(a==1){
		printf("%d,",y);
		printf("%d",x*-1);
	}
	if(a==2){
		printf("%d,",x*-1);
		printf("%d",y*-1);
	}
	if(a==3){
		printf("%d,",y*-1);
		printf("%d",x);
	}
	scanf("%d");
}
