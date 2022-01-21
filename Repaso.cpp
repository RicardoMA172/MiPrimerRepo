#include<stdio.h>
#include<windows.h>
#define CICLO 50
void calculadora();
void gato();
void creditos();
//Añadir comentario
//Nueva actualización
const int lado = 3;
char matriz[lado][lado];

main() {
	int num = 0, indice = 0;
	printf("ingrese un numero \n");
	scanf("%d",&num);
	printf ("su numero es %d\n",num);

	if(num > CICLO) {
		printf("Su numero es mayor que %d!\n",CICLO);
		indice = 1;
	} else if(num < CICLO) {
		printf("Su numero es menor que %d!\n",CICLO);
		indice = 2;
	} else {
		printf("Su numero es igual que %d!\n",CICLO);
		indice = 3;
	}
	system("pause");
	system("cls");
	switch (indice) {
		case 1:
			calculadora();
			break;
		case 2:
			gato();
			break;
		case 3:
			creditos();
			break;
	}

}

void inicializar() {
	for(int i = 0; i < lado; i ++) {
		for(int j = 0; j < lado; j++) {
			matriz[i][j] = ' ';
		}
	}
}

void tablero() {
	for(int i = 0; i < lado; i ++) {
		for(int j = 0; j < lado; j++) {
			printf("  %c | ",matriz[i][j]);
		}
		printf("\n");
		printf("-----------------\n");
	}
}

bool marcarCasilla(int fila, int columna, int turno) {
	bool bandera;
	if(turno == 1) {
		if(matriz[fila][columna] == ' ') {
			matriz[fila][columna] = 'X';
			bandera = true;
		} else {
			bandera = false;
		}

	} else {
		if(matriz[fila][columna] == ' ') {
			matriz[fila][columna] = 'O';
			bandera = true;
		} else {
			bandera = false;
		}
	}
	return bandera;
}

int ganar() {
	int ganador = 0;
	//Ganar en Horizontal
	for(int i = 0; i < lado; i++) {
		for(int j = 0; j < lado - 2; j++) {
			//Jugador 1
			if(matriz[i][j] == 'X' && matriz[i][j+1] == 'X' && matriz[i][j+2] == 'X') {
				ganador = 1;
				//printf("\nHorizontal\n");
				//Jugador 2
			} else if(matriz[i][j] == 'O' && matriz[i][j+1] == 'O' && matriz[i][j+2] == 'O') {
				ganador = 2;
				//printf("\nHorizontal\n");
			}
		}
	}

	//Ganar en Vertical
	for(int i = 0; i < lado - 2; i++) {
		for(int j = 0; j < lado; j++) {
			//Jugador 1
			if(matriz[i][j] == 'X' && matriz[i+1][j] == 'X' && matriz[i+2][j] == 'X') {
				ganador = 1;
				//printf("\nVertical\n");
				//Jugador 2
			} else if(matriz[i][j] == 'O' && matriz[i+1][j] == 'O' && matriz[i+2][j] == 'O') {
				ganador = 2;
				//printf("\nVertical\n");
			}
		}
	}
	//Ganar en Diagonal 1 "\"
	for(int i = 0; i < lado - 2; i++) {
		for(int j = 0; j < lado - 2; j++) {
			//Jugador 1
			if(matriz[i][j] == 'X' && matriz[i+1][j+1] == 'X' && matriz[i+2][j+2] == 'X') {
				ganador = 1;
				//printf("\nDiagonal 1\n");
				//Jugador 2
			} else if(matriz[i][j] == 'O' && matriz[i+1][j+1] == 'O' && matriz[i+2][j+2] == 'O') {
				ganador = 2;
				//printf("\nDiagonal 1\n");
			}
		}
	}

	//Ganar en Diagonal 2 "/"
	for(int i = 0; i < lado - 2; i++) {
		for(int j = 2; j < lado; j++) {
			//Jugador 1
			if(matriz[i][j] == 'X' && matriz[i+1][j-1] == 'X' && matriz[i+2][j-2] == 'X') {
				ganador = 1;
				//printf("\nDiagonal 2\n");
				//Jugador 2
			} else if(matriz[i][j] == 'O' && matriz[i+1][j-1] == 'O' && matriz[i+2][j-2] == 'O') {
				ganador = 2;
				//printf("\nDiagonal 2\n");
			}
		}
	}

	return ganador;
}

void jugar() {
	char j1[3] = "N1";
	char j2[3] = "N2";
	int turno = 1, fila, col, caso = 0, ganador = 0;
	bool bandera;

	do {
		if(turno == 1) {
			do {
				printf("Jugador %s ingrese fila",j1);
				scanf("%d",&fila);
				if(fila <= -1 || fila > 2) {
					printf("Fuera de rango\nIngrese un numero entre el 0 y 2");
					system("pause");
				}
			} while(fila <= -1 || fila > 2);

			do {
				printf("Jugador %s ingrese columna",j1);
				scanf("%d",&col);
				if(col <= -1 || col > 2) {
					printf("Fuera de rango\nIngrese un numero entre el 0 y 2");
					system("pause");
				}
			} while(col <= -1 || col > 2);

			bandera = marcarCasilla(fila,col,turno);
			if(bandera) {
				turno = 2;
				caso++;
			} else {
				printf("Coordenadas ocupada, introduzca de nuevo las coordenadas\n");
				system("pause");
			}
		} else {
			do {
				printf("Jugador %s ingrese fila",j2);
				scanf("%d",&fila);
				if(fila <= -1 || fila > 2) {
					printf("Fuera de rango\nIngrese un numero entre el 0 y 2");
					system("pause");
				}
			} while(fila <= -1 || fila > 2);

			do {
				printf("Jugador %s ingrese fila",j2);
				scanf("%d",&col);
				if(col <= -1 || col > 2) {
					printf("Fuera de rango\nIngrese un numero entre el 0 y 2");
					system("pause");
				}
			} while(col <= -1 || col > 2);

			bandera = marcarCasilla(fila,col,turno);

			if(bandera) {
				turno = 1;
				caso++;
			} else {
				printf("Coordenadas ocupada, introduzca de nuevo las coordenadas\n");
				system("pause");
			}
		}
		
		system("cls");
		
		tablero();
		
		ganador = ganar();
		
		if(ganador == 1) {
			printf("\nGana el jugador 1!!!");
			caso = 10;
		} else if(ganador == 2) {
			caso = 10;
			printf("\nGana el jugador 2!!!");
		}

	} while(caso<9);

	if(caso == lado*lado) {
		printf("\nEmpate!!");
	} else {
		printf("\nAdios!!");
	}
}
void gato() {
	inicializar();
	tablero();
	jugar();
}

void calculadora() {
	int op,num1,num2;
	printf("escoja una opcion\n");
	printf("1.-suma\n");
	printf("2.-resta\n");
	printf("3.-multiplicacion\n");
	printf("4.-division\n");
	scanf("%d",&op);

	switch (op) {
		case 1:
			printf("ingrese un numero");
			scanf("%d",&num1);
			printf("ingrese otro numero");
			scanf("%d",&num2);
			printf("La suma es: %d",num1+num2);
			break;
		case 2:
			printf("ingrese un numero");
			scanf("%d",&num1);
			printf("ingrese otro numero");
			scanf("%d",&num2);
			printf("La resta es: %d",num1-num2);
			break;
		case 3:
			printf("ingrese un numero");
			scanf("%d",&num1);
			printf("ingrese otro numero");
			scanf("%d",&num2);
			printf("La multiplicacion es: %d",num1*num2);
			break;
		case 4:
			float div;
			float n1;
			float n2;
			printf("ingrese un numero");
			scanf("%f",&n1);
			do {
				printf("ingrese otro numero");
				scanf("%f",&n2);
				if(n2==0) {
					printf("no se puede dividir entre 0");
					system("pause");
				}
			} while(n2==0);

			div=n1/n2;
			printf("la division es %f",div);
			break;

		default:
			printf("opcion no valida");
	}
}

void creditos(){
	printf("\n\n\t\tELABORADO POR:\n");
	printf("\n\n\t\tRicardo y Oscar\n");
}


