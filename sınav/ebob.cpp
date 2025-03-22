#include<stdio.h>
int main(){
	int a,b,x,y,i,j;
	printf("birinci sayi= ");
	scanf("%d",&a);
	printf("\nikinci sayi= ");
	scanf("%d",&b);
	for(i=a;i>0;i--){
	x=a%i;
	if(x==0){
		for(j=b;j>0;j--){
		y=b%j;
		if(y==0){
			if(i==j){
				printf("\n EBOB= %d",i);
				return 0; 
			}
		
	}
}}}}
