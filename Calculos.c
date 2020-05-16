#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int num1, num2;
	float num3, c1, c2, c3;
	printf("Digite um número INTEIRO: ");
	scanf ("%d", &num1);
	printf("Digite um segundo número INTEIRO: ");
	scanf ("%d", &num2);
	printf("Digite um número REAL: ");
	scanf ("%f", &num3);
	
	c1 = (num1 * 2) * (num2 / 2);
	c2 = (num1 * 3) + num3;
	c3 = num3 * num3 * num3;
	
	printf("%0.2f\n %0.2f\n %0.2f\n", c1, c2, c3);
}
