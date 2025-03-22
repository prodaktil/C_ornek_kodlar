#include<stdio.h>
int main (){
	int a,b,c;
	printf("sayiyi girin \n ");
	scanf("%d",&a);
	switch( a / 100 ) { 
		case 9: printf("dokuz yuz "); break;
		case 8: printf("sekiz yuz "); break;
		case 7: printf("yedi yuz "); break;
		case 6: printf("alti yuz "); break;
		case 5: printf("bes yuz "); break;
		case 4: printf("dort yuz "); break;
		case 3: printf("uc yuz "); break;
		case 2: printf("iki yuz "); break;
		case 1: printf("yuz "); break;
	}
	
	b=a%100;
	switch( b / 10 ) { 
		case 9: printf("doksan "); break;
		case 8: printf("seksen "); break;
		case 7: printf("yetmis "); break;
		case 6: printf("altmis "); break; 
		case 5: printf("elli "); break;
		case 4: printf("kirk "); break;
		case 3: printf("otuz "); break;
		case 2: printf("yirmi "); break;
		case 1: printf("on "); break;
	}
	
	c=a%10;
	switch( c ) { 
		case 9: printf("dokuz "); break;
		case 8: printf("sekiz "); break;
		case 7: printf("yedi "); break;
		case 6: printf("alti "); break; 
		case 5: printf("bes "); break;
		case 4: printf("dort "); break;
		case 3: printf("üc "); break;
		case 2: printf("iki "); break;
		case 1: printf("bir "); break;
	}
	scanf("%d");
}

