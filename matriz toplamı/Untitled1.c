#include<stdio.h>
int main(){
	int a[2][2];
	int b[2][2];
	int t[2][2];
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("a dizisinin [%d],[%d] elemaını girin=",i+1,j+1);
			scanf("%d",&a[i][j]);
			printf("b dizisinin [%d],[%d] elemaını girin=",i+1,j+1);
			scanf("%d",&b[i][j]);
			t[i][j]=a[i][j]+b[i][j];
	}	
}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d ",t[i][j]);
		}
		printf("\n");
		}
		}

