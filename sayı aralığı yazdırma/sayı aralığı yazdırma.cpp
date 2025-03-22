#include<stdio.h>
int main(){
	int x;
	int y;
	int z;
	printf("programa hoþ geldini \n baþlangic sayýyý girin");
	scanf("%d",&x);
	printf("\n son sayýyý girin");
	scanf("%d",&y);
	printf("artýs miktarýný girin");
	scanf("%d",&z);
	printf("\n %d\n",x);
	while(x<y){
		printf("%d\n",x=x+z);
	}
	scanf("%d");
	return 0;
}

