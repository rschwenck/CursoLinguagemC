// CalcularSoma.cpp : Defines the entry point for the console application.
// Autor Rodrigo Schwenck
// Ler e somar dois números inteiros quaisquer e apresentar o resultado.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int numero1, numero2, resultado;

	printf("Digite o primeiro numero: ");
	scanf_s("%d", &numero1);
	printf("Digite o segundo numero: ");
	scanf_s("%d", &numero2);

	resultado = numero1 + numero2;

	printf("%d + %d \n", numero1, numero2);
	printf("A soma dos numeros digitados: %d \n", resultado);

	system("pause");
    return 0;
}

