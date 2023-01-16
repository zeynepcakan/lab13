#include <stdio.h>
#include <stdlib.h>

void kontrol(int sayi)
{
	if (sayi%2==0)
	printf("sayi cifttir",sayi);
	else
	printf("sayi tektir",sayi);
}
int main ()
{
	int s;
	printf("sayi giriniz: "); scanf("%d",&s);
	kontrol(s);
}
