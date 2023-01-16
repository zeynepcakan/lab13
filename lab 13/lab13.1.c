#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int karealan(int x)
	{
		return x*x;
}
	int main(){
		
		int a;
		printf("karenin kenar uzunlugu: "); 
		scanf("%d",&a);
		printf("Alan= %d",karealan(a));
		return 0;
	}

