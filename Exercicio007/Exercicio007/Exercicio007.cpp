// Exercicio007.cpp : Defines the entry point for the console application.
// Autor Rodrigo Schwenck
// Escreva um programa que calcule e apresente o valor do volume de uma lata de forma cilindrica
// O programa de usar a fórmula: volume = 3.14159 * raio² * altura

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float raio = 3.57;
	float altura = 10;
	float volume = 3.14159;
	
	float volumeTotal = volume * raio * raio * altura;

	printf("O volume total da lata: %.2f \n", volumeTotal);

	system("pause");
    return 0;
}

