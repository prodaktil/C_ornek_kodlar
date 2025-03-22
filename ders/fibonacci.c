#include<stdio.h>
int main (){
	int a=2;
	int b=3;
	int i;
	scanf("%d",&i);
	printf("1 1 ");
	while(i>2){
	i=i-2;
	printf(" %d ",a);
	a=a+b;
	printf(" %d ",b);
	b=a+b;
	}	
}
