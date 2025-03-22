#include<stdio.h>
int main(){
	char f,y,z,a,b,c,d,e;
	int x,h,p,o;
	printf("\n								yapýmcý:Bahadýr Þahin")
	printf("?n")
	printf("\n oyunuma hos geldin");
	printf("\n oyun boyunca karsýna seceneklar cýkacak");
	printf("\n hangi secenegi secmek istiyorsan onun sonunda yazan numara bas ve entera bas");
	printf("\n Hadi Basliyalim");
	printf("\n karakterin adi ne olsun (maksimum 8 karakter) \n");
	scanf("%c%c%c%c%c%c%c%c",&f,&y,&z,&a,&b,&c,&d,&e);
	printf("\n %c%c%c%c%c%c%c%c adinda bi arkeolog bir gun bir tapinaka girmis.\n Hadi cikis yolunu bullalaim.\n",f,y,z,a,b,c,d,e);
	printf("\n kirmizi bir tapýnaktasýn ve onunde 2 yol var handisinden gitmek istiyorsun \n sag 1\n sol 2");
	scanf("%d",&x);
	if(x<=1){
		printf("\n onune dikenli bi yol cikti.\n iki tane kol: \n yesil kolu cek 1\n kirmizi kolu cek 2 \n");
		scanf("%d",&x);
		if(x<=1){
			printf("\n yanlis kolu çektin ve altýndaki zemin bi anda cekildi.\n sonsuza kadar duseceksin");
			while(x<=1){
				printf("\n dusuyorsun^<");
				printf("\n dusuyorsun>");
			}
		}
		else if(x>=2){
			printf("\n dikenler cekildi  onunde bi kapý var\n ama kapyi acmak icin bu islemi cozmen gerekiyor \n 20 saniyen var cabuk ol \n 0x1+5+11+32+21+7+2x0=?\n");
			scanf("%d",&h);
			if(h==76){
				printf("\n kapi acildi \n iki yol var \n sag 1\n sol 2");
				scanf("%d",&x);
				if(x<=1){
					 printf("\n arkandan bocekler gelmeye basladý \n cabuk merdivenlerden cýk\n 15 saniyen var \n merdivenlerden cikmak için 5 kez 8 e bas \n");
					 scanf("%d",&x);
					 if(x==88888){
					 	printf("\n merdivenleri ciktin ve kapýyý kapattýn \n sonunda cikis kapýsýný gordun ama cikmak icin bulmacayý coz:\n boslýga hangi sayi gelmeli \n 12-24-...-66");
					 	scanf("%d",&p);
					 	if(p==40){
					 		printf("\n cikisa ulastin \n TEBRÝKLER\n ");
							scanf("%d");
							}
					 	else{
					 	printf("bocekler seni canli canli yedi");
					 	scanf("%d");
					 }
						 
					 }
					 else{
					 	printf("bocekler seni canli canli yedi");
					 	scanf("%d");
					 }
				}
				else if(x>=2){
					printf("\n arkandan bir KURT ADAM gelmeye basladý \n cabuk merdivenlerden in \n 15 saniyen var \n merdivenlerden inmek  için 5 kez 2 e bas \n");
					scanf("%d",&h);
					if(h==22222){
						printf("\n merdivenleri ciktin ve kapýyý kapattýn \n ama KURT ADAM kapiyi kirdi \n bicagini kullnma 1 \n bicagini kullan(KÝLÝTLÝ) \n");
						scanf("%d");
						printf("\nKURT ADAM TARAFINDAN OLDURULDUN");
						scanf("%d");
					}
					else{
						printf("\n KURT ADAM seni yakaladi \nKURT ADAM TARAFINDAN OLDURULDUN");
						scanf("%d");
					}	
				}
			}
			else{
				printf("\n bi anda oda boceklerle doldu ve böcekler seni canli canli yedi");
				scanf("%d");
			}
			
		}
	}
	else if(x>=2){
		printf("\n yerde bir bicak var \n al 1 \n alma 2");
		scanf("%d",&x);
		if(x<=1){
			printf("\n arkandan bir KURT ADAM gelmeye basladý \n cabuk merdivenlerden in \n 15 saniyen var \n merdivenlerden inmek  için 5 kez 2 e bas \n");
					scanf("%d",&h);
				if(h==22222){
						printf("\n merdivenleri ciktin ve kapýyý kapattýn \n ama KURT ADAM kapiyi kirdi \n bicagini kullnma 1 \n bicagini kullan 2 \n");
						scanf("%d",&x);
						if(x>=2){
							printf("\n KURT ADMÝ bicaklayarak oldurdun \n Ve ilerde cikisi gordun ama bulmacayý cozmen gerek \n oruntuyu tamamla \n 16-20-...-23");
							scanf("%d",&h);
							if(h==22){
							printf("\n cýkýsa ulaþtýn \n TEBRÝKLERR\n ");
							scanf("%d");	
							}
							else{
								printf("bocekler seni canli canli yedi");
								scanf("%d");	
							}
						}
						else if(x<=1){
							printf("\nKURT ADAM TARAFINDAN OLDURULDUN");
							scanf("%d");
						}
				}
				else{
						printf("\n KURT ADAM seni yakaladi \nKURT ADAM TARAFINDAN OLDURULDUN");
						scanf("%d");
			}
		}
		else if(x>=2){
			printf("\n arkandan bir KURT ADAM gelmeye basladý \n cabuk merdivenlerden in \n 15 saniyen var \n merdivenlerden inmek  için 5 kez 2 e bas \n");
					scanf("%d",&o);
				if(o==22222){
						printf("\n merdivenleri ciktin ve kapýyý kapattýn \n ama KURT ADAM kapiyi kirdi \n bicagini kullnma 1 \n bicagini kullan(KÝLÝTLÝ) \n");
						scanf("%d");
						printf("\nKURT ADAM TARAFINDAN OLDURULDUN");
						scanf("%d");
				}
				else{
						printf("\n KURT ADAM seni yakaladi \nKURT ADAM TARAFINDAN OLDURULDUN");
						scanf("%d");
			}
		}
	}
}
