#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float fahrenheit, celsius;
	printf("Bem vindo ao conversor de temperatura\n\nDigite aqui a temperatura em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32) / 1.8;
	printf("\n%0.2f em celsius é %0.2f",fahrenheit, celsius);
}
