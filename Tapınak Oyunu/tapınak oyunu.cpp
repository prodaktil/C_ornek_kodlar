#include<stdio.h>
int main(){
	char f,y,z,a,b,c,d,e;
	int x,h,p,o;
	printf("\n								yap�mc�:Bahad�r �ahin")
	printf("?n")
	printf("\n oyunuma hos geldin");
	printf("\n oyun boyunca kars�na seceneklar c�kacak");
	printf("\n hangi secenegi secmek istiyorsan onun sonunda yazan numara bas ve entera bas");
	printf("\n Hadi Basliyalim");
	printf("\n karakterin adi ne olsun (maksimum 8 karakter) \n");
	scanf("%c%c%c%c%c%c%c%c",&f,&y,&z,&a,&b,&c,&d,&e);
	printf("\n %c%c%c%c%c%c%c%c adinda bi arkeolog bir gun bir tapinaka girmis.\n Hadi cikis yolunu bullalaim.\n",f,y,z,a,b,c,d,e);
	printf("\n kirmizi bir tap�naktas�n ve onunde 2 yol var handisinden gitmek istiyorsun \n sag 1\n sol 2");
	scanf("%d",&x);
	if(x<=1){
		printf("\n onune dikenli bi yol cikti.\n iki tane kol: \n yesil kolu cek 1\n kirmizi kolu cek 2 \n");
		scanf("%d",&x);
		if(x<=1){
			printf("\n yanlis kolu �ektin ve alt�ndaki zemin bi anda cekildi.\n sonsuza kadar duseceksin");
			while(x<=1){
				printf("\n dusuyorsun^<");
				printf("\n dusuyorsun>");
			}
		}
		else if(x>=2){
			printf("\n dikenler cekildi  onunde bi kap� var\n ama kapyi acmak icin bu islemi cozmen gerekiyor \n 20 saniyen var cabuk ol \n 0x1+5+11+32+21+7+2x0=?\n");
			scanf("%d",&h);
			if(h==76){
				printf("\n kapi acildi \n iki yol var \n sag 1\n sol 2");
				scanf("%d",&x);
				if(x<=1){
					 printf("\n arkandan bocekler gelmeye baslad� \n cabuk merdivenlerden c�k\n 15 saniyen var \n merdivenlerden cikmak i�in 5 kez 8 e bas \n");
					 scanf("%d",&x);
					 if(x==88888){
					 	printf("\n merdivenleri ciktin ve kap�y� kapatt�n \n sonunda cikis kap�s�n� gordun ama cikmak icin bulmacay� coz:\n bosl�ga hangi sayi gelmeli \n 12-24-...-66");
					 	scanf("%d",&p);
					 	if(p==40){
					 		printf("\n cikisa ulastin \n TEBR�KLER\n ");
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
					printf("\n arkandan bir KURT ADAM gelmeye baslad� \n cabuk merdivenlerden in \n 15 saniyen var \n merdivenlerden inmek  i�in 5 kez 2 e bas \n");
					scanf("%d",&h);
					if(h==22222){
						printf("\n merdivenleri ciktin ve kap�y� kapatt�n \n ama KURT ADAM kapiyi kirdi \n bicagini kullnma 1 \n bicagini kullan(K�L�TL�) \n");
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
				printf("\n bi anda oda boceklerle doldu ve b�cekler seni canli canli yedi");
				scanf("%d");
			}
			
		}
	}
	else if(x>=2){
		printf("\n yerde bir bicak var \n al 1 \n alma 2");
		scanf("%d",&x);
		if(x<=1){
			printf("\n arkandan bir KURT ADAM gelmeye baslad� \n cabuk merdivenlerden in \n 15 saniyen var \n merdivenlerden inmek  i�in 5 kez 2 e bas \n");
					scanf("%d",&h);
				if(h==22222){
						printf("\n merdivenleri ciktin ve kap�y� kapatt�n \n ama KURT ADAM kapiyi kirdi \n bicagini kullnma 1 \n bicagini kullan 2 \n");
						scanf("%d",&x);
						if(x>=2){
							printf("\n KURT ADM� bicaklayarak oldurdun \n Ve ilerde cikisi gordun ama bulmacay� cozmen gerek \n oruntuyu tamamla \n 16-20-...-23");
							scanf("%d",&h);
							if(h==22){
							printf("\n c�k�sa ula�t�n \n TEBR�KLERR\n ");
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
			printf("\n arkandan bir KURT ADAM gelmeye baslad� \n cabuk merdivenlerden in \n 15 saniyen var \n merdivenlerden inmek  i�in 5 kez 2 e bas \n");
					scanf("%d",&o);
				if(o==22222){
						printf("\n merdivenleri ciktin ve kap�y� kapatt�n \n ama KURT ADAM kapiyi kirdi \n bicagini kullnma 1 \n bicagini kullan(K�L�TL�) \n");
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
