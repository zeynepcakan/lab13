#include <stdio.h>
#include <stdlib.h>

int Asal(sayi){
	int kontrol=1,i;
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			kontrol=0;
			break;
		}
		else 
		{
			kontrol=1;
		}
	
	}
		return kontrol;
}
int Armstrong(sayi){
	int bas,t,sonuc=0,control=1;
	sayi=t;
	while(t!=0)
	{
		bas=t%10;
		sonuc=sonuc+(bas*bas*bas);
		t=t/10;
	}
	if(sonuc==sayi)
	control=1;
	else
	control=0;
	return control;
}
int main(){
	
	int s;
	printf("sayi giriniz:"); scanf("%d",&s);
	int x=Asal(s);
	int y=Armstrong(s);
	if(x==1 && y==1)
	printf("\nsayi hem asal hem armstrong sayidir\n");
	else if(x==1 && y==0)
	printf("\nsayi sadece asal sayidir\n");
	else if(y==1 && x==0)
	printf("\nsayi sadece armstrong sayidir\n");
	else if(x==0 && y==0)
	printf("\nasal ya da armstrong deðildir");
	return 0;
}
