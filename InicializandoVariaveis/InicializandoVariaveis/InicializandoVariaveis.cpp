// InicializandoVariaveis.cpp : Defines the entry point for the console application.
// Autor Rodrigo Schwenck

#include "stdafx.h"


int main()
{
	//Variáveis
	int numero = 46;
	float valor = 8.37;
	char letra = 'X';
	int valor1, valor2, valor3;

	valor1 = valor2 = valor3 = 0;

	printf("Variavel numero...: %d       \n", numero);
	printf("Variavel valor....: %f       \n", valor);
	printf("Variavel valor....: %10.2f   \n", valor);
	printf("Variavel valor....: %.2f     \n", valor);
	printf("Variavel letra....: %c       \n", letra);
	printf("Valores...........: %d %d %d \n", valor1, valor2, valor3);

    return 0;
}

