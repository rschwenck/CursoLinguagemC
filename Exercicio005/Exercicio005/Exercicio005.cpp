// Exercicio005.cpp : Defines the entry point for the console application.
// Autor Rodrigo Schwenck
// Um carro fez uma viagem com KM inicial (odometro) de 200000 e depois da viagem ficou com 207349
// O programa deve apresentar a distancia percorrida na viagem.

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int kmInicial = 200000;
	int kmFinal = 207349;
	int kmPercorrido;

	kmPercorrido = kmFinal - kmInicial;
	printf("Quilometragem total percorrida foi de.....: %d KM \n", kmPercorrido);
	
	system("pause");
    return 0;
}

