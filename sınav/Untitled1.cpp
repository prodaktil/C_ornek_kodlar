#include<stdio.h>
int main (){
	int a, i,j,b,x,y;
printf("lutfen iki sayi girin:");
scanf("%d , %d", &a,&b);
for (i =1; i <=a ; i++) {
	x = a / i; 
	for (j = 1; j <=b; j++) {
		y = b / j;
		if (x == y) {
			printf("%d", y);
			
		}
		break;

	}
	}
}
