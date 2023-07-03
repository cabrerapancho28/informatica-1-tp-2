#include <stdio.h>
int main()
{
	int contador;
	int numero;
	int total;
	int promedio;
	total=0;
	contador=1;
	while ( contador <= 10){
		printf("Introduzca un numero:");
		scanf( "%d", &numero );
		total= total + numero;
		contador= contador + 1;
	}
		promedio = total / 10;
		printf( "El promedio de los numeros es %d\n ", promedio );
		return (0);
}
