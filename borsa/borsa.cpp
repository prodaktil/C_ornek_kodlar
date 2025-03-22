#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
	int i, c, d;
	int M = 0;
	int j;
	int k;
	int a[6];
	int Min;
	int max;
	srand(time(0));
	printf("Dizi elemanlarý : \t");
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
			if ( k<j)
			{
				max = a[j]- a[k];
				if (max > M) {
					M= max;
					c = k;
					d = j;
				}

			}
		}
	}
    printf("\n kar = %d",M);
	printf("\nalis gunu = %d", c+1);
	printf("\nsatis gunu = %d", d+1);
	return 0;
}
	
