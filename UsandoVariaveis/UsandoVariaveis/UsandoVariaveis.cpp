// UsandoVariaveis.cpp : Defines the entry point for the console application.
// Autor Rodrigo Schwenck

#include "stdafx.h"


int main()
{
	int numero;		//declaração de variáveis, no inicio vamos usar mais estes três tipos.
	float nota1, nota2, nota3, media; //mesmo tipo podem ser declaradas na mesma linha separadas por virgula
	char letra;

	numero = 37;
	printf("O valor da variavel numero: %d \n", numero);

	numero = 44 + 10;
	printf("O novo valor da variavel numero: %d \n", numero);
	
    return 0;
}

