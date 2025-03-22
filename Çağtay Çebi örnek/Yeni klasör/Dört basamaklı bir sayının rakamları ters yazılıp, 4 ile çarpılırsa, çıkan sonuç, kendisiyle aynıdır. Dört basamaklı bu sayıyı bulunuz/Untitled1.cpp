#include<stdio.h>
int main (){
	int k=999;
	int a,b,c,d;
	int f,t,h,p,e;
	while(1){
		a=k/1000;
		e=a*1000;
		f=k-e;
		b=f/100;
		t=b*100;
		h=f-t;
		c=h/10;
		d=k%10;
		c=c*100;
		b=b*10;
		d=d*1000;
		p=a+b+c+d;
		p=p*4;
		if(p==k){
			printf("%d",p);
			scanf("%d");
		}
		else{
		k++;	
	}
}
}
