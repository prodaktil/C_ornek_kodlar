#include<stdio.h>
int main(){
	int dizi[10] = { 1,5,16,27,29,34,38,42,48,54 };
	int k=5;
	int sayi =34;
	int x;
	while(1){
		if(dizi[k]==sayi){
			printf("sayý %d. indekstedir \n",k);
			break;
		}
		else if(dizi[k]>sayi){
			k=k/2;
		}
		else if(dizi[k]<sayi){
			k=k+(k/2);
		}
	}
	
}



