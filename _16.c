/*
Sadece tek say�lar� yazd�ran bir
program
*/
#include<stdio.h>
int main( void )
{
	int i;
	for( i = 0; i < 10; i++ ) {
		//i de�i�keninin 2'ye g�re modu
		//0 sonucunu veriyorsa, bu onun 
		//bir �ift say� oldu�unu g�sterir.
		//Bu durumda ekrana yazd�r�lmamas� 
		//i�in d�ng� bir sonraki ad�ma ge�er.
		if( i%3 == 0 ) continue;
		printf("%.2d\n",i);//%.2d float say�larda kullan�yoruz
	}
	return 0;
}
