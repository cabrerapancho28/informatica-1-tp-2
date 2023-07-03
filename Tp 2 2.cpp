#include <stdio.h>
#include <math.h>

int main()
{
	int contador=0;
	int n=0;
	int a;
	int r;
	for(a=1;a<=10;a=a+1){
		printf( "\n Introduzca el coeficiente numero: " );
		scanf( "%d", &n );
		r=n%3;
		if (r==0)
			contador=contador+1;
	}
	printf( "\n cantidad de numeros divisibles por 3 es %d",contador);
	return (0);
}
