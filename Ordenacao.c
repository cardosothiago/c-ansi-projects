#include <stdio.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL, "");
	int vet [3], i, j, aux;
	
	printf ("Bem vindo ao ordenador!\n\n");
	
	for (i=0; i<3;i++){
		printf ("Digite %i número: ", i+1);
		scanf ("%i", &vet[i]);
		fflush(stdin);
	}	
	for (i = 0; i<3; i++) {
		for (j=0; j<3;j++){
			if (vet[i]<vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
	
	for (i=0;i<3;i++){
		printf ("\n%i\n", vet[i]);
	}

	return 0;
}
