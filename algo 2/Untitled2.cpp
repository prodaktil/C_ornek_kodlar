#include<stdio.h>

int main(){
	int d[10] = { 1,2,1,1,4,2,5,8,0,6 };
	int i,j;
	int k=0;
		for (i = 0; i < 10; i++){
			for (j = 0; j < 10; j++){
			if(d[i]==d[j]){
			k++;
			}
			}
			printf("dizde %d tane %d var \n",k,d[i] );
			k=0;
		}
		
		}
