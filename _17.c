//me�e bili�im
/*m
e
�
e
bil�im
*/

//klavyeden girilen iki say�sal de�er kar��la�t�r�l�yor, b�y�kolandan k���k olan ��kar�l�yor ve sonu� ekrana yaz�l�yor.

#include <stdio.h>
#include <string.h>
main(){
int a,b;
printf("A i�in bir de�er giriniz?");
scanf("%d",&a);
printf("B i�in bir de�er giriniz?");
scanf("%d",&b);
if (a>b)
printf("A-B=%d\n", a-b);
else
printf("%d", b-a);
}
