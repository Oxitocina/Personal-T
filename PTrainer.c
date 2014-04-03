#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
int eligeTrabajo(int, int);
int cuentaAtras(int);

int main (int argc, char *argv[]){
	srand(time(NULL));
	int contador=0;
	int ultimos[2];
	ultimos[0]=0;
	ultimos[1]=0;
	while (1){
		int numero= rand()%10;
		if (numero == ultimos[0] || numero == ultimos[1])
			continue;
		else {
			if (numero != 0){
				if(contador%2==0)
					ultimos[0]=numero;
				else
					ultimos[1]=numero;
			}
		}
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
			printf("30 flexiones soldado. ¡AHORA!\n");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		case 2:
			printf("25 sentadillas soldado. ¡AHORA!\n");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		case 3:
			printf("30 abdominales superiores soldado. ¡AHORA!\n");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		case 4:
			printf("25 \"escalones\" soldado. ¡AHORA!\n");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		case 5:
			printf("25 zancadas soldado. ¡AHORA!\n");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		case 6:
			printf("30 segundos de planking con codos soldado. ¡AHORA!\n");
			cuentaAtras(30);
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		case 7:
			printf("30 segundos de sentadillas contra la pared soldado. ¡AHORA!\n");
			cuentaAtras(30);
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		case 8:
			printf("30 abdominales superiores soldado. ¡AHORA!\n");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		case 9:
			printf("30 lumbares soldado. ¡AHORA!\n");
			printf("Terminaste. Pulsa intro para tu siguiente trabajo\n");
			getchar();
			break;
		default:
			if (counter<7)
				return counter-1;
			else{
				printf("Buen trabajo soldado, descansa.\n");
				getchar();
				return 0;
			}
	}
	return counter;
}
int cuentaAtras(int segundos){
	printf("3\n");
	sleep(1);
	printf("2\n");
	sleep(1);
	printf("1\n");
	sleep(1);
	printf("¡YA!\n");
	sleep(segundos);
	return 0;
}
