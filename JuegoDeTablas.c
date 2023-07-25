#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/**Este programa es un juego para aprender tablas de multiplicar y sumas**/
	
	/**Esta constante guarda la primer respuesta correcta**/
	const int RESPUESTA_CORRECTA = 1;
	
	/**Esta contante guarda la segunda respuesta correcta**/
	const int RESPUESTA_CORRECTA_DOS = 2;
	
	/**Esta constante guarda la opcion salir**/
	const int OPCION_SALIR = -1;
	
	/**Esta constante guarda el rango del numereo random para elegir respuesta correcta dos**/
	const int RANGO_RANDOM = 21;
	
	/*Esta constante restrige el numero random pra elegir  la respuesta correcta uno*/
	const int MAXIMO_RESULTADO_UNO = 10;
	
	/**Esta constante incrementa el valor de un resultado para que este sea falso**/
	const int INCREMENTO_RESULTADO_FALSO = 9;
		
	/**Estas vavariables de tipo entero guradan los numeros ingresados por el usuario**/
	int numberOne;
	int numberTwo;
	
	/**Esta variable de tipo emtero guarda un numero de tipo entero entre 0 y 21 con un rand**/
	int numeroRandom;
	
	/**Esta variable de tipo entero guarda el juego seleccionado por el ususario**/
	int juegoSeleccionado;
	
	/**Esta variable de tipo entero guarda el resultado de la multiplicacion**/
	int resultadoMultiplicacion;
	
	/*Esta variable de tipo enmtero guarda el resultado de la suma*/
	int resultadoSuma;
	
	/**Esta variable de tipo entero guarda el resultado seleccionado por el usuario**/
	int resultadoSeleccionado;
	
	
	while(juegoSeleccionado!=OPCION_SALIR){
	printf("Bienvenido, ¿que juego deseas jugar?.");
	printf("\n 1)Juego de las multiplicaciones.");
	printf("\n 2)Juego de las sumas.");
	printf("\n 3)Escribe -1 para salir.");
	printf("\n ");
	scanf("%i", &juegoSeleccionado);
	
	
	switch(juegoSeleccionado){
	
		case 1:      //Opcion para multiplicar numeros
			printf("Ingresa un numero: ");
			scanf("%i", &numberOne);
			printf("Ingresa otro numero: ");
			scanf("%i", &numberTwo);
			printf("¿Cual es el resultado de multiplicar el numero %i y el numero %i?", numberOne, numberTwo);
			resultadoMultiplicacion = numberOne*numberTwo;
		
			numeroRandom = rand() %RANGO_RANDOM;
		
			if(numeroRandom<=MAXIMO_RESULTADO_UNO){
				printf("\n 1) %i", resultadoMultiplicacion);
				printf("\n 2) %i", resultadoMultiplicacion+INCREMENTO_RESULTADO_FALSO);
				printf("\n ");
				scanf("%i", &resultadoSeleccionado);
			
				if(resultadoSeleccionado==RESPUESTA_CORRECTA){
					printf("Acertaste, felicidades.\n");
				}else{
					printf("Respuesta incorrecta, recuerda que la multiplicacion del numero %i y el numero %i dan como resultado %i.\n", numberOne, numberTwo, numberOne*numberTwo);
				}
			
			}else{
				printf("\n 1) %i", resultadoMultiplicacion+INCREMENTO_RESULTADO_FALSO);
				printf("\n 2) %i", resultadoMultiplicacion);
				printf("\n ");
				scanf("%i", &resultadoSeleccionado);
			
				if(resultadoSeleccionado==RESPUESTA_CORRECTA_DOS){
					printf("Acertaste, felicidades.\n");
				}else{
					printf("Respuesta incorrecta, recuerda que la multiplicacion del numero %i y el numero %i dan como resultado %i.\n", numberOne, numberTwo, numberOne*numberTwo);
				}
			}
			
		break;
		
		case 2:   //Opcion para sumar numeros
			printf("Ingresa un numero: ");
			scanf("%i", &numberOne);
			printf("Ingresa otro numero: ");
			scanf("%i", &numberTwo);
			printf("¿Cual es el resultado de sumar el numero %i y el numero %i?", numberOne, numberTwo);
			resultadoSuma = numberOne+ numberTwo;
		
			numeroRandom = rand() %RANGO_RANDOM;
		
			if(numeroRandom<=MAXIMO_RESULTADO_UNO){
				printf("\n 1) %i", resultadoSuma);
				printf("\n 2) %i", resultadoSuma+INCREMENTO_RESULTADO_FALSO);
				printf("\n ");
				scanf("%i", &resultadoSeleccionado);
				
				if(resultadoSeleccionado==RESPUESTA_CORRECTA){
					printf("Acertaste, felicidades.\n");
				}else{
					printf("Respuesta incorrecta, recuerda que la suma del numero %i y el numero %i dan como resultado %i.\n", numberOne, numberTwo, numberOne+numberTwo);
				}
			}else{
				printf("\n 1) %i", resultadoSuma+INCREMENTO_RESULTADO_FALSO);
				printf("\n 2) %i", resultadoSuma);
				printf("\n ");
				scanf("%i", &resultadoSeleccionado);
			
				if(resultadoSeleccionado==RESPUESTA_CORRECTA_DOS){
					printf("Acertaste, felicidades.\n");
				}else{
					printf("Respuesta incorrecta, recuerda que la suma del numero %i y el numero %i dan como resultado %i.\n", numberOne, numberTwo, numberOne+numberTwo);
				}
			}	
				
		break;
		
		default:
			printf("Saliendo...");
		break;
	
	}

	system("pause");
	system("cls");
}

	return 0;
}
