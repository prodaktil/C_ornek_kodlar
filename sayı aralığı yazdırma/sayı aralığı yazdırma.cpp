#include<stdio.h>
int main(){
	int x;
	int y;
	int z;
	printf("programa ho� geldini \n ba�langic say�y� girin");
	scanf("%d",&x);
	printf("\n son say�y� girin");
	scanf("%d",&y);
	printf("art�s miktar�n� girin");
	scanf("%d",&z);
	printf("\n %d\n",x);
	while(x<y){
		printf("%d\n",x=x+z);
	}
	scanf("%d");
	return 0;
}

