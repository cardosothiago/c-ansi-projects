#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int maquinas, custopormaquina = 3900, custototal, motor20cv = 1, motor1cv = 2, motor5cv = 3;
	
	printf("\n\t\t\tOlá, quantas máquinas venederemos hoje?  --> ");
	scanf("%d", &maquinas);
	
	motor20cv = motor20cv *  maquinas;
	motor1cv  = motor1cv  *  maquinas;
	motor5cv  = motor5cv  *  maquinas;
	
	
	printf("\n\t\tEntão serão necessários: %d motores de 20 cv, %d motores de 1 cv e %d motores de 5 cv! ", motor20cv, motor1cv, motor5cv);
	
	motor20cv = motor20cv * 1500;
	motor1cv  = motor1cv  * 300;
	motor5cv  = motor5cv  * 600;
	custototal = motor20cv + motor1cv + motor5cv;
	
	printf("\n\nCusto por máquina: %d\n", & custopormaquina);
	printf("\n\nCusto dos motores:\n");
	printf("Motor de 20cv: %d\n", motor20cv);
	printf("Motor de 1cv:  %d\n", motor1cv);
	printf("Motor de 5cv:  %d\n", motor5cv);
	printf("\n\nCusto total: %d\n", & custototal);
}
