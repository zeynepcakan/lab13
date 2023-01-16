#include <stdio.h>
#include <stdlib.h>

//fonksiyonsuz cözüm;

/*int main(int argc, char *argv[]) {
	
	char metin[100];
	int i,c=1;
	printf("metin giriniz: \n");
	gets(metin);
	
	for(i=0; i<strlen(metin); i++)
	{
		if(metin[i]==' ')
		c++;
	}
	printf("girilen metin %d kelime icerir.",c);
	return 0;
}*/


//!!!girilen metnin kac kelime icerdigini bulan program(fonksiyonlu)....!!!

int kelime(char metin[100]){
	int c=1,i;
	for(i=0; metin[i]!='\0'; i++)
	{
		if(metin[i]==' ')
		c++;
	}
	return c;
}
int main(){
	
	char metin[100];
	printf("metin giriniz: \n");
	gets(metin);
	printf("girilen metin %d kelime iceririr..",kelime(metin));
}
