#include <stdio.h>

double suma(double a, double b);
double resta(double a, double b);
double multiplicacion(double a, double b);
double division(double a, double b);
double raiz(double a);
double potencia(double val, double exp);
double conversor(double euros);
double iva(double val, double iv);

int main(int argc, char **argv)
{
	double a, b, result;
	int option = -1;
	
	// Mientras no se termina
	while( 1 ) {
		
		// Mostrar operación
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Raiz Cuadrada\n");
		printf("6.- Potencia\n");
		printf("8.- Conversor euros/pesetas\n");
		printf("9.- IVA\n");
		printf("7.- Salir\n");
		
		// Leer operación
		scanf("%d", &option);
		
		// Salir
		if( option == 7 ) break;
		
		// Si la opción es correcta
		if( option > 0 && option < 10 ) {
		
			// Leer operandos
			scanf("%lf", &a);
			
			if( option != 5 && option != 8 ) {
				scanf("%lf", &b);
			}
			
			// Operar
			switch( option ) {
				case 1:
					result = suma(a,b);
					break;
				case 2:
					result = resta(a,b);
					break;
				case 3:
					result = multiplicacion(a,b);
					break;
				case 4:
					result = division(a,b);
					break;
				case 5:
					result = raiz(a);
					break;
				case 6:
					result = potencia(a,b);
					break;
				case 7:
					printf("Terminado\n");
				case 8:
					result = conversor(a);
					break;
				case 9:
					result = iva(a,b);
					break;
			}
			
			// Mostrar resultado
			if( option != 7 ) {
				printf("El resultado es %lf", result);
			}
			
		}
		
	}
	
	// Salir sin error
	return 0;
}





double multiplicacion(double a, double b){
	return a*b;
}

double division(double a, double b){
	return a / b;	
}
double conversor(double euros) {
	return multiplicacion(euros,166.386);
}

double potencia(double val, double exp)
{
	int i;
	double total;
	
	for(i = 0; i < exp; i++)
	{
		total += multiplicacion(val,val);
	}
	return total;
}

double resta(double a, double b){
 double resultado = 0;
 resultado = a - b;
 return resultado;
}

double suma(double a, double b){
	return a+b;
}

double raiz(double a){
resu = 1;
while(multiplicacion(resu,resu)<=a)
	resu+=1;

return resu-1;
}

double iva(double val, double iv){

	return  suma(val,multiplicacion(val, iv));
}
