#include<stdio.h>
int main (){
	char kontrol;
	float x;
	printf("fahraniyt f  celsiu<s c girin\n");
	scanf("%c",&kontrol);
	
	if (kontrol=='f'){
		
		printf("sonuc: %f \n",x);;
	}
   else
	if (kontrol=='c'){
		
		printf("sonuc: %f",x);
	}
	else{
		printf("yanlýþ girdin");
	}
}
