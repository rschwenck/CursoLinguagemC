// VolumeDoParalelepipedo.cpp : Defines the entry point for the console application.
// autor Rodrigo Schwenck
// Fórmula: Volume = comprimento x largura x altura

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float volume, comprimento, largura, altura;

	printf("Digite o valor do comprimento: ");
	scanf_s("%f", &comprimento);
	printf("Digite o valor do largura: ");
	scanf_s("%f", &largura);
	printf("Digite o valor do altura: ");
	scanf_s("%f", &altura);

	volume = comprimento * largura * altura;

	printf("O volume do paralelepipedo: %.2f \n", volume);

	system("pause");
    return 0;
}

