
# include "stdio.h"

void main()
{
	int i, j;
	i=3;
	j=4;

	printf("toplama sonucu : %d\n", i+j+toplama(1, 2));
}

int toplama(int i, int j){
	return i+j;
}
