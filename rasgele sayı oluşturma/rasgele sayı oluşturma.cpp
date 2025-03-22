#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
	int sayi;
	char komut;
	int a1=20;
	int a2=30;   
	while(1){
		srand(time(0));
		printf("\n min deger= %d \n max deger= %d \n degistirmek icin = d \n rasgele sayi uretmek icin = r \n ye basin \n",a1,a2);
		scanf("\n %c",&komut);
		switch(komut){
			case 'r' : sayi=rand(); sayi=a1+(sayi%(a2-a1+1)); printf("\n rasgele sayi=%d \n \n ",sayi); break;
			case 'd' : printf("min deger="); scanf("%d",&a1); printf("\n max deger="); scanf("%d",&a2); break;
	}
}
}
