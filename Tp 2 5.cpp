#include <stdio.h>
int main ()
{
	int A;
	int B;
	int C;
	int max;
	int min;
	printf( "Introduzca un entero: " );
	scanf( "%d" , &A );
	printf( "Introduzca un entero: " );
	scanf( "%d" , &B );
	printf( "Introduzca un entero: " );
	scanf( "%d" , &C );
	
	if(A>B){
		if(A>C){
		A = max;
		}
		else{
			max = C;
		}
	}
	else{
		if(B>C){
			max = B;
		}
		else{
			max = C;
		}
	}
	if(A<B){
		if(A<C){
			min = A;
		}
		else{
			min = C;
		}
	}
	else{
		if(B<C){
			min = B;
		}
		else{
			
			min = A;
		}
	}
	printf("El mayor es : %d\n", max);
	printf( "El minimo es: %d\n",min);
	return(0);
}
