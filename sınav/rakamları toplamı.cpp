#include<stdio.h>
int main (){
	int x,a,b,toplam;
	printf("say�y� girin \n");
	scanf("%d",&x);
	b=x%10;
	printf("%d",b);
	toplam=b;
	while(x>10){
	x=x/10;
	a=x%10;
	toplam=toplam+a;
	printf("%d",a);
}
printf("\n rakamlar� toplam�=%d",toplam);
}

