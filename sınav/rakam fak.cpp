#include<stdio.h>
int main (){
int a, b, i,j,x,g;
int mod;
int toplam=0;
int carpim=1;
int carpim2 = 1;

printf("lutfen bir sayi girin:");
scanf("%d",&g);
x=1;
while(1) {
toplam=0;
carpim=1;
x++;
a=x;
mod = a % 10; 

for (i = 1; i <= mod; i++) {  
	carpim = carpim * i ; 
	
}
toplam = toplam + carpim;  
while (a > 10) {  
	a = a / 10;   
	b = a % 10; 
	carpim2=1;
	for (j = 1; j <= b; j++) {    
		carpim2 = carpim2 * j;  
	}
	toplam = toplam + carpim2  ;  
}
if(x==toplam){
printf("toplamlar %d \n",toplam);
}
}
}


