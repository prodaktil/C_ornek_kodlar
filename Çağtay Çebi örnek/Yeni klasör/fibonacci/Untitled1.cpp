  #include<stdio.h>
int main (){
	int p;
	int a=0;
	int b=1;
	int k=0;
	printf("dizi kaç elamanlý olsun=\n");
	scanf("%d",&p);
	p=p-2;
	printf("\n 0,1,");
	while (a<p){
		a++;
		k=b+k;
		printf ("%d",k);
		b=b+k;
		printf("%d,",b);
		
	}
	}
