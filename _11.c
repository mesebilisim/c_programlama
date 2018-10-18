
#include "stdio.h"

int toplama(){
	printf("klavyeden girilen 2 sayiyi toplar\n");

	int i, j;

	printf("birinci sayiyi giriniz: ");
	scanf("%d", &i);

	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &j);

	return 0;
}

void main()
{
	int i, j;
	i=3;
	j=4;

	printf("toplama sonucu : %d\n", i+j+toplama());
}



