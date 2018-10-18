
# include "stdio.h"


int toplama(int i, int j){
	int kalem=0;
	return i+j;
}

void main()
{
	kalem = 5;
	int i, j;
	i=3;
	j=4;

	printf("toplama sonucu : %d\n", i+j+toplama(1, 2));
}
