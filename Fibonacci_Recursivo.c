#include<stdio.h>
#include <locale.h>

int fibonacci(int i);
int main(){
	setlocale(LC_ALL, "");
	int a;
	
	printf("Qual termo da série de Fibonacci você quer? -> ");
	scanf("%i", &a);
	
	printf("\nO termo %i equivale a %i!", a, fibonacci(a));
	
	return(0);
}

int fibonacci(int n){
	if(n ==2 || n==3){
		return 1;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
