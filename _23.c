// Kullan�c�dan iki say� al�ns�n. 
//Bu iki say� topland�ktan sonra, sonucu ekrana yazd�r�ls�n. 
//Yazd�rma sonunda "Devam etmek istiyor musunuz?"
// sorusu sorulsun ve klavyeden 'E' veya 'e' karakterlerinden birisi girilirse, 
//program devam etsin. Yok farkl� bir�ey girilirse, program sonland�r�ls�n. 
#include<stdio.h>
int main( void )
{
	int sayi_1, sayi_2;
	char devam_mi;
	do {
		printf("Birinci say�y� giriniz> ");
		scanf("%d",&sayi_1);
		printf("�kinci say�y� giriniz> ");
		scanf("%d",&sayi_2);
		printf("%d + %d = %d\n", sayi_1, sayi_2, sayi_1 + sayi_2);
		printf("Devam etmek ister misiniz? ");
		//C'de tek karakter okuma i�lemi biraz s�k�nt�l� 
		//oldu�undan, burada da bir do while kulland�k.
		do {
			scanf("%c",&devam_mi);
		}while( devam_mi == '\n' );
		printf("\n");
	} while( devam_mi == 'E' || devam_mi == 'e' );

	return 0;
}
