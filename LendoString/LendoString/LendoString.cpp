// LendoString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	char nome[80];

	printf("Digite um nome: ");
	gets_s(nome);

	printf("O nome digitado foi: %s \n", nome);

	system("pause");
    return 0;
}

