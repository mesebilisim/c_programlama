//i'nin de�eri 0'da olsa, 1000'de olsa, en az�ndan bir kez Merhaba 
//D�nya'n�n yaz�lacak olmas�d�r. 
//Ancak while'de kontrol �nce yap�ld��� i�in, hi�bir �ey ekrana yaz�lmaz.

#include<stdio.h>
int main( void )
{
	int i = 0;
	do {
		//�nce i'nin de�eri artt�r�l�yor
		//sonra ekrana Merhaba D�nya yazd�r�l�yor.
		printf("%2d: Merhaba D�nya\n",++i);
	} while( i < 10 );
	return 0;
}
