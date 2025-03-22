#include<stdio.h>
int main( void )
{
	int a,b,c;
	printf("Üçgenin kenar uzunlýklarýný girin\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b){
		if(a+b>c && c>b-a){
			printf("bu ucgen olusturulabilir");
		}
		else{
			printf("bu ucgen olusturulamaz");	
		}
	}
	else if(b<a){
		if(a+b>c && c>a-b){
			printf("bu ucgen olusturulabilir");
		}
		else{
			printf("bu ucgen olusturulamaz");	
		}
	}
	else if(a<c){
		if(a+c>b && b>c-a){
			printf("bu ucgen olusturulabilir");
		}
		else{
			printf("bu ucgen olusturulamaz");	
		}
	}
	else if(c<a){
		if(a+c>b && b>a-c){
			printf("bu ucgen olusturulabilir");
		}
		else{
			printf("bu ucgen olusturulamaz");	
		}
	}
	else if(c<b){
		if(c+b>a && b>b-c){
			printf("bu ucgen olusturulabilir");
		}
		else{
			printf("bu ucgen olusturulamaz");	
		}
	}
	if(b<c){
		if(c+b>a && a>c-b){
			printf("bu ucgen olusturulabilir");
		}
		else{
			printf("bu ucgen olusturulamaz");	
		}
	}
	else{
	printf("bu ucgen olusturulabilir");	
	}
}
	
	
