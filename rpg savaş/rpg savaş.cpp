#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
	int dcan=40;
	int can=70;
	int maxcan=100;
	int atak1=7;
	int atak2=14;
	int atakd;
	int datak1=10;
	int datak2=16;
	int datakd;
	int pot=3;
	int i=1;
	int g=0;
	int gk=2;
	char komut;
	char k;
	printf("\n Yanlislikla uzak diyarlarda ki  bir ormana girdin ve ");
	bas :
	printf("\n Kurt adamla karsilastin ne yapacaksin: \n Saldirmak icin = S (7-14) \n Guclu saldiri yapmak icin G (%d kez kullanma hakkin var ve her tur gectinde hasarin artar) \n Can iksiri icmek icin = c (30 can basar ve sadece %d hakkin var) \n kacmak icin = K  , ya bas \n ",gk-1,pot);
	dcan=40;
	while (dcan>0 && can>0){
		g=g+2;
		srand(time(0));
		scanf("\n %c",&komut);
		switch(komut){
			case 's': atakd=rand();  atakd=atak1+(atakd%(atak2-atak1+1));  dcan=dcan-atakd; printf("\n vurdugun hasar: %d \n Kurt adamin kalan cani: %d \n",atakd,dcan); break;
			
			case 'g' : gk=gk-1;
			if(gk==1){
			atakd=rand();  atakd=atak1+(atakd%(atak2-atak1+1)); atakd=atakd+g; dcan=dcan-atakd; printf("\n vurdugun hasar: %d \n Kurt adamin kalan cani: %d \n",atakd,dcan);
			}
			else printf("\n guclu saldiri hakkin bitti!!!");
			break;
			case 'c': if(pot>0){
			pot=pot-1; can=can+30; printf("\n canin 30 arti ve senin yeni canin: %d",can); } 
				else printf("\ncan iksirin bitti");
				break;
			
			case 'k': printf("\nkorkak kopek, buradan kacis yok"); break;
		}
		datakd=rand();
		datakd=datak1+(datakd%(datak2-datak1+1));
		can=can-datakd;
		printf("\nKurt Adam %d vurdu ve senin canin %d kaldi\n",datakd,can);
	}
	if (can>dcan){
		printf("Toplam Puan: %d",i*10);
		i=i+1;
		printf("\nKurt Adami oldurmeyi basardin ve seviye %d. ye gecmeye hak kazandin.\n Bir sonraki seviyeye gecmek icin G'e bas \n Ormandan kacmak icin K ya bas. ",i);
	    scanf("\n %c",&k);
	    switch(k){
	    	case 'g' : goto bas; break;
	    	case 'k' : printf("\Korkak kopek anca kac."); 
			  printf("\n Toplam Puan: %d",(i-1)*10); scanf("%d"); break;
		}
	}
	else printf("\ Kurt adam seni kurt adama donusturdu ve so..."); scanf("%d");
}
	
