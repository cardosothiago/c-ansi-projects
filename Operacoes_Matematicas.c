#include<stdio.h>
#include<locale.h>

#define Sair 5 
#define Adicao 1
#define Subtracao 2
#define Multiplicacao 3
#define Divisao 4

void adicao();
void subtracao();
void multiplicacao();
void divisao();
void menuprincipal();

main() {
	int menu;
	setlocale(LC_ALL, "");
	while(menu != 5)
	{
		menuprincipal();
		scanf("%d", &menu);
		system("cls");
	
		if (menu==1)
		{
			adicao();
		}

		if (menu==2) 
		{
			subtracao();
		}
	
		if (menu==3) 
		{
			multiplicacao();
		}
		if (menu==4) 
		{
			divisao();
		}
	
		if (menu < 1 || menu > 5 )
		{
			printf("\n\n*******************************************************************************\n\n\n");
			printf("   Op��o inv�lida, clique em qualquer tecla para voltar ao menu principal.\n\n\n");
			printf("*******************************************************************************\n\n\n\n\n\n");
			system("pause");
			system("cls");
		}	
  	}
}
void adicao(){
	float resultado, x, y;
	printf("\t\t\t\t**********************\n");
	printf("\t\t\t\t      Adi��o        \n");
	printf("\t\t\t\t**********************\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &x);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &y);
	
	resultado = x + y;
	
	printf("Resultado = %0.2f\n", resultado);
	system("pause");
	system("cls");
}
	
void subtracao(){
	float resultado, x, y;
	printf("\t\t\t\t**********************\n");
	printf("\t\t\t\t      Subtra��o           \n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &x);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &y);
	
	resultado = x - y;
	
	printf("Resultado = %0.2f\n", resultado);
	system("pause");
	system("cls");
}
	
void multiplicacao(){
	float resultado, x, y;
	printf("\t\t\t\t**********************\n");
	printf("\t\t\t\t    Multiplica��o      \n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &x);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &y);
	
	resultado = x * y;
	
	printf("Resultado = %0.2f\n", resultado);
	system("pause");
	system("cls");
}
	
void divisao(){
	float resultado, x, y;
	printf("\t\t\t\t**********************\n");
	printf("\t\t\t\t    Divis�o      \n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &x);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &y);
	
	resultado = x / y;
	
	printf("Resultado = %0.2f\n", resultado);
	system("pause");
	system("cls");
}
	
	
void menuprincipal(){
	printf("\t\t\t\t**********************\n\n");
	printf("\t\t\t\t         MENU          \n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("\t\t\t\t  1.Adi��o\n\n");
	printf("\t\t\t\t  2.Subtra��o\n\n");
	printf("\t\t\t\t  3.Multiplica��o\n\n");
	printf("\t\t\t\t  4.Divis�o\n\n");
	printf("\t\t\t\t  5.Sair\n\n");
	printf("\t\t\t\t**********************\n\n");
	printf("\t\t\t\t O que deseja fazer?\n");
}
