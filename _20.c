#include<stdio.h>
int main( void )
{
	int i = 0, toplam_deger = 0;
	int n;
	printf("L�tfen n de�erini giriniz> ");
	scanf("%d",&n);
	while( i <= n ) {
		toplam_deger += i*i;//eski d�ere yeni bir de�er ekliyruz.
		i++;
	}
	printf("Sonu�: %d\n",toplam_deger);
	return 0;
}
