/*
Ekrana 10 kere "Merhaba D�nya"
yazan program
*/
#include<stdio.h>
int main( void )
{
	//i de�i�kenine bir ba�lang�� de�eri at�yoruz.
	//i'ye ilk deger atanmazsa, d�ng�m�z yanl�� �al���r.
	int i = 0;
	//i'nin degeri kontrol i�leminden
	//sonra 1 artar.
	while( i++ < 10 ) {
		//2d bir tam say�n�n yazd�r�laca��
		//ancak bu say� tek rakamdan olu�sa da
		//2 rakaml�k yer ay�r�lmas�n� belirtir.
		printf("%d: Merhaba D�nya\n",i);
	}
	return 0;
}
