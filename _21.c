// 100 - 90 aras� A, 89 - 80 aras� B, 79 - 70 aras� C, 69 - 60 aras� D, 59 ve 
//alt�ysa F olsun.
// E�er 100'den b�y�k veya negatif bir say� girilirse,
// o zaman program hatal� bir giri� yap�ld���n� konusunda bizleri uyars�n.
//  if - else if yap�s�n� kullanarak rahatl�kla yan�tlayabilirsiniz. 
#include<stdio.h>
int main( void )
{
	int not;
	printf("L�tfen notu giriniz> ");
	scanf("%d",&not);
	switch( not / 10 ) {
		case 10: 
		case 9: printf("NOT: A\n"); break;
		case 8: printf("NOT: B\n"); break;
		case 7: printf("NOT: C\n"); break;
		case 6: printf("NOT: D\n"); break;
		case 5:
		case 4:
		case 3:
		case 2: 
		case 1:
		case 0: printf("NOT: F\n"); break;
		default:
			printf("HATA: Bilinmeyen bir de�er girdiniz!\n");
	}
	
	return 0;
}
