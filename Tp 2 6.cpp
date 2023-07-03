#include <stdio.h>
int main()
{
	int n1 = 0;
	int n2 = 1;
	int n3 = 1;
	int numero;
	int i;
	printf( "\n Introduzca el numero: " );
	scanf( "%d", &numero );
	printf( "1 , ");
	for ( i=1; i<=numero; i++){
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf( "%d, ", n3);
	}
	return (0);
}
