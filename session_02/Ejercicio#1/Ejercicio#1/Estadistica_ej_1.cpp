#include "Estadistica_ej_1.h"
#include <iostream>
using namespace std;

void Estadistica_ej_1::CalcularMayor(int numeros[], int tamano) {
	int mayor = numeros[0];
	for (int i = 1; i < tamano; i++)
	{
		if (numeros[i] > mayor)
		{
			mayor = numeros[i];
		}
	}
	cout << "El numero mayor es: " << mayor << endl;
}

void Estadistica_ej_1::CalcularMenor(int numeros[], int tamano) {
	int menor = numeros[0];
	for (int i = 1; i < tamano; i++)
	{
		if (numeros[i] < menor)
		{
			menor = numeros[i];
		}
	}
	cout << "El numero menor es: " << menor << endl;
}

void Estadistica_ej_1::CalcularPromedio(int numeros[], int tamano) {
	int suma = 0;
	for (int i = 0; i < tamano; i++)
	{
		suma += numeros[i];
	}
	double promedio = (suma) / tamano;
	cout << "El promedio es: " << promedio << endl;
}
void Estadistica_ej_1::calcularsuma(int numeros[], int tamano) {
	int suma = 0;
	for (int i = 0; i < tamano; i++)
	{
		suma += numeros[i];
	}
	cout << "la suma del los numeros es: " << suma << endl;
}