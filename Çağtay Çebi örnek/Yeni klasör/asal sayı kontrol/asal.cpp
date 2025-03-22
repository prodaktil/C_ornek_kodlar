#include<stdio.h>
int main (){
 int a,b;
 int i=1;
 printf("sayiyi girin= \n");
 scanf("%d",&a);
 b=a;
 b=b-1;
 while(b>1){
 	if(a%b==0){
 		printf("\nasal sayi degil");
 		return 0;
 	
	 }
	 b=b-1;
	 
 	}
 	
 	printf("\n asal sayi");
 }


