#include<stdio.h>
#include<stdbool.h>
func(int c){
	c = c+c;
	return c;
}
func2(int* b){
	static int h = 10 ;
		*b = *b * *b;

	return 66;
}
int main(void)
{
int c = 6;
	printf("%d\n", c & 88);

}
