#include <stdio.h>
#include <stdlib.h>

double ort(int x)
{
    int sum=0,i=0;
    sum+=x;
    i++;
    return sum/i;
}
int main (){
	int a,i;
	printf("5 adet sayi giriniz: \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d.sayiyi girin:",i+1); scanf("%d",&a);
		ort(a);
	}
	int b = ort(a);
	printf("Ortalama= %lf",b);
	return 0;
	
}
