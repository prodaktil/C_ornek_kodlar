#include<stdio.h>
int main (){
	int x=0;
	int y;
	int a,b,c;
	printf("karenin kenar sayýsýný gir \n");
	scanf("%d",&x);
	printf(" ");
	for (y=0;y<x;y++){
		printf("*");
	}
		for(a=0;a<x;a++){
		printf("\n* ");
		for(b=0;b<x;b++){
			printf(" ");
		}
		printf("*");
	}
	printf("\n ");
	for (c=0;c<x;c++){
		printf("*");
	}
}

