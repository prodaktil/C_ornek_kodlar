#include<iostream>
int main(){
int x=0;
printf("Takdir Hesaplama Prgramina Hos geldiniz \n Lutfen Notunuzu Giriniz:");
scanf("%d",&x);
if (x>=85){
printf("Takdir Aldiniz");
}
else 
if (x<85 && x>=70){
printf("Tesekkur Aldiniz");
}
else
if (x>=40){
printf("Duz Gectiniz");
}
else
if (x>0.1){
printf("Sinifta Kaldiniz");
}
}
