
#include "stdio.h"

/*
Bu program c 
ogrenmek icindir

License : Apache 2.0
Author : Sahin Mersin
Date : 18.10.2018
*/

int toplama(){
	printf("klavyeden girilen 2 sayiyi toplar\n");

	int i, j;

	printf("birinci sayiyi giriniz: ");
	scanf("%d", &i);

	printf("ikinci sayiyi giriniz: ");
	scanf("%d", &j);

	return i + j;
}

char klavye_oku(){
	printf("f harfini oku\n");
	char c=' ';
	scanf("%s", &c);
	if (c == 'f'){
		printf("okunan f dir\n");
	}
}

void main()
{
	//int i, j;
	//i=3;
	//j=4;

	//printf("toplama sonucu : %d\n", i+j+toplama());

	
	klavye_oku();
}



