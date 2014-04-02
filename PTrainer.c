#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
int eligeTrabajo(int, int);

int main (int argc, char *argv[]){
	srand(time(NULL));
	int contador=0;
	while (1){
		int numero= rand()%10;
		contador=eligeTrabajo(numero, contador);
		if (contador==0)
			break;
	}
	return 0;
}


int eligeTrabajo(int numero, int contador){
	int counter=contador+1;
	switch (numero){
		case 1:
			printf("30 flexiones soldado. ¡AHORA!");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");
			break;
		case 2:
			printf("25 sentadillas soldado. ¡AHORA!");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");

			break;
		case 3:
			printf("30 abdominales superiores soldado. ¡AHORA!");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");

			break;
		case 4:
			printf("25 \"escalones\" soldado. ¡AHORA!");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");

			break;
		case 5:
			printf("25 zancadas soldado. ¡AHORA!");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");

			break;
		case 6:
			printf("30 segundos de planking con codos soldado. ¡AHORA!");
			cuentaAtras(30);
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");

			break;
		case 7:
			printf("30 segundos de sentadillas contra la pared soldado. ¡AHORA!");
			cuentaAtras(30);
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");

			break;
		case 8:
			printf("30 abdominales superiores soldado. ¡AHORA!");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");

			break;
		case 9:
			printf("30 lumbares soldado. ¡AHORA!");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo");

			break;
		default:
			if (counter<7)
				return counter-1;
			else{
				printf("Buen trabajo soldado, descansa.");
				return 0;
			}
	}
	return counter;
}
int cuentaAtras(int segundos){
	printf("3");
	sleep(1);
	printf("2");
	sleep(1);
	printf("1");
	sleep("1");
	printf("¡YA!");
	sleep(segundos);
	return 0;
}
