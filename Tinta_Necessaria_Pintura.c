#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float largura, altura, m2, litrostinta, latas;
	
	printf("\nQuantos metros de altura tem a parede? --> ");
	scanf("%f", &altura);
	printf("\nQuantos metros de largura tem a parede? --> ");
	scanf("%f", &largura);
	
	m2 = largura * altura;
	litrostinta = m2 * 3;
	latas = litrostinta / 3.6;
	
	printf("\nSerão necessários %0.f latas de tinta para pintar esta parede!", latas);
	
}
