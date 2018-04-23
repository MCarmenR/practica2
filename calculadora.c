#include <stdio.h>

int potencia(int base, int exponente)
{
	int i, total;
	
	for(i = 0; i < exponente; i++)
	{
		total += multiplcacion(base,base);
	}
	return total;
}

int main(int argc, char **argv)
{
	int a, b, result, option = -1;
	
	// Mientras no se termina
	while( 1 ) {
		
		// Mostrar operación
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Raiz Cuadrada\n");
		printf("6.- Potencia\n");
		printf("7.- Salir\n");
		
		// Leer operación
		scanf("%d", &option);
		
		// Salir
		if( option == 7 ) break;
		
		// Leer operandos
		scanf("%d", &a);
		scanf("%d", &b);
		
		// Operar
		switch( option ) {
			case 1:
				result=a+b;
				
				break;
			case 2:
				result = a - b;
				break;
			case 3:
				result = 0;
				break;
			case 4:
				result = 0;
				break;
			case 5:
				result = 0;
				break;
			case 6:
				printf("\n         -> Introduzca el numero que hara de base: ");  /* Introducimos los datos */

				scanf("%i",&a);

				printf("\n         -> Introduzca el exponente: ");

				scanf("%i",&b);

				resultado = potencia(a,b);
			
			
			
				printf("\n         El resultado de %i^%i es %i",a,b,resultado);
				break;
			default:
				result = 0;
				printf("Opción incorrecta\n");
				break;
		}
		
		// Mostrar resultado
		if( option > 0 && option < 7 ) {
			printf("El resultado es %d", result);
		}
		
	}
	
	// Salir sin error
	return 0;
}

