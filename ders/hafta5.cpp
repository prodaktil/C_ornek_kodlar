#include<stdio.h>
int main (){
	int x;
	int y,k;
	int i;
	int tek=1;
	int duo=0;
	
	printf("lutfen bir sayi girin:\n");
	scanf("%d",&x);

if(x%2==0){
 y=x/2;
}
else {

	y =(x / 2) + 1;
}
	printf("toplamlarý: %d",y*y);
	k=x;
 while(k>0){
 	if(k%2==1){
tek=tek*k;
	 }
	 else {
	 	duo = duo + (k*k);
	 	
	 }
	
 	k--;
 }
 printf("\n çarpýmlarý:%d",tek);

printf("\n karelerinin toplamý:%d",duo);


	}
		
		 
	
	

