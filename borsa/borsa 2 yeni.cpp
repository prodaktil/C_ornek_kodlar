#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
    int W=0;
    start:
	int i, c, d,x,y;
	int M = 0;
	int j,k,h,g;
	int a[6];
	int max;
	srand(time(0));
	printf("\n\nDizi elemanlari : \t");
	for (i = 0; i < 6; i++)
	{
		a[i] = rand();
		a[i] = a[i] % 10;
		printf(" %d ", a[i]);


	}
 
	for (j = 0; j < 6; j++)
	{
		for (k = 0; k < 6; k++)
		{
			for(h = 0; h < 6; h++)
			{
				for(g = 0 ;g < 6; g++)
				if(k<j){
				if(j<=h){
					if(h<g){
					max=(a[j]- a[k])+(a[g]- a[h]);
					if(max>M)
					{
						M=max;
						c=k;
						d=j;
						y=g;
						x=h;
					
		}}}}}}}
    printf("\n kar = %d",M);
	printf("\n 1.alis gunu = %d", c+1);
	printf("\n 1.satis gunu = %d", d+1);
	printf("\n 2.alis gunu = %d", x+1);
	printf("\n 2.satis gunu = %d", y+1);
	printf("\n \n bir daha calismasi icin 1 e basin\n");
	scanf("%d",&W);
	if(W==1){
	    goto start;
	}
}
