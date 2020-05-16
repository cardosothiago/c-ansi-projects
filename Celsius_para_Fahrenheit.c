#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float celsius, fahrenheit;
	printf("Bem vindo ao conversor de temperatura\n\nDigite aqui a temperatura em Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = (1.8 * celsius) + 32; 
	printf("\n%0.2f em fahrenheit é %0.2f",celsius, fahrenheit);
}
