#include<stdio.h>
int main(){
	int t[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("t dizisinin [%d],[%d] elemaýný girin=",i+1,j+1);
			scanf("%d",&t[i][j]);
	}	
}
for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",t[i][j]);
		}
		printf("\n");
		}
printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",t[j][i]);
		}
		printf("\n");
		}
		}

