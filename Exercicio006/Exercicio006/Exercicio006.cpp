// Exercicio006.cpp : Defines the entry point for the console application.
// Autor Rodrigo Schwenck
// Escreva um programa que armazene as 3 notas escolares de um aluno, calcule a média e a armazene em uma variavel, Apresentar a media

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float nota1, nota2, nota3, media;

	nota1 = 7.5;
	nota2 = 6;
	nota3 = 8.3;

	media = (nota1 + nota2 + nota3)/3;
	printf("A media do aluno: %.2f \n", media);

	system("pause");
    return 0;
}

