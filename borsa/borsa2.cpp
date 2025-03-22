#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int i,x,k,j,y,c;
	x = rand();
	x = x%10+5;
	int a[x];
	int h=0;
	int w;
	x=x+5;
	printf("Dizi elemanlarý : \t");
	for (i = 0; i < x; i++)
	{
		a[i] = rand();
		a[i] = a[i] % 10;
		printf(" %d ", a[i]);
	}
	ilk:
		if(h==1){
		while(i<=x){
			i++;
		for(k=0;k<x;k++){
			if(a[i]==a[k]){
				j=i;
				while(j<=x){
					j++;
					if(a[i]==a[j]){
						c++;
					}
					else{
					}
				}
				if(c>y){
					w=c;
				}
				else{
				}
			}
		}		
	}
}
else{

	for (i=0;i<x;i++){
		for(k=0;k<x;k++){
			if(a[i]==a[k]){
				j=i;
				while(j<=x){
					j++;
					if(a[i]==a[j]){
						y++;
					}
					else{
					}
				}
				w=j;
				goto ilk;
			}
		}		
	}
	printf("\n sonuç %d",w);
}
}
	
