#include<stdio.h>
int main( void )
{
	int sayi_1, sayi_2;
	char operator_simgesi;
	printf("L�tfen i�lem simgesi giriniz> ");
	scanf("%c",&operator_simgesi);
	printf("L�tfen birinci say�y� giriniz> ");
	scanf("%d",&sayi_1);
	printf("L�tfen ikinci say�y� giriniz> ");
	scanf("%d",&sayi_2);
	switch( operator_simgesi ) {
		case '+':
			printf("%d %c %d = %d\n",sayi_1,operator_simgesi, sayi_2, sayi_1 + sayi_2); break;
		case '-': 
			printf("%d %c %d = %d\n",sayi_1,operator_simgesi, sayi_2, sayi_1 - sayi_2); break;
		case '%':
			printf("%d %c %d = %d\n",sayi_1,operator_simgesi, sayi_2, sayi_1 % sayi_2); break;
		case '*':
			printf("%d %c %d = %d\n",sayi_1,operator_simgesi, sayi_2, sayi_1 * sayi_2); break;
		case '/':
			printf("%d %c %d = %.2f\n",sayi_1,operator_simgesi, sayi_2, (float)sayi_1 / sayi_2);break;
		default:
			printf("HATA: Tan�ms�z bir operat�r girdiniz!\n");
	}
	return 0;
}
