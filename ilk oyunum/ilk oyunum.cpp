lude<stdio.h>
int main(){
	int x;
	printf("kars�na iki yol cikti \n sag 1 \n sol 2");
	scanf("%d",&x);
	if(x<=1){
		printf("\nkars�na bi adam cikti \n konus 1 \n saklanarak gec 2");
		scanf("%d",&x);
		if(x<=1){
			printf("\nadam seni oldurdu");
		}
		else if(x>=2){
			printf("\nbir bina gordun \n gir 1 \n girme 2");
			scanf("%d",&x);
			if(x<=1){
				printf("iceride ki zombiler seni oldurdu");
			}
			else if(x>=2){
				printf("\nndeprem oldu ve bina ustune cokerek oldun");
			}
		}
	}
	else if(x>=2){
		printf("\ndustun ve oldun");
	}
}
