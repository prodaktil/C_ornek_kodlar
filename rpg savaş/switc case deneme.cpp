#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
	int a;
	int b;
	while(1){
	srand(time(0));
	scanf("%d",&a);
	switch (a) {
		case 5: printf("5 yazdýnýz"); break;
		case 4: b= rand(); printf("\n %d",b); break;
		default: printf("yanlis girdiniz");
	}
	}
}
