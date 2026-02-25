
#include <iostream>
#include "Estadistica_ej_1.h"
using namespace std;


int main()
{
	Estadistica_ej_1 estadistica;
	int numeros[10];
	cout << "Bienvenido al programa" << endl;
	cout << "Ingrese 10 numeros enteros: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Numero " << i + 1 << ": ";
		cin >> numeros[i];
	}
	int opcion;

	do {
		cout << "Seleccione una opcion:" << endl;
		cout << "1. Calcular Mayor" << endl;
		cout << "2. Calcular Menor" << endl;
		cout << "3. Calcular Promedio" << endl;
		cout << "4. Calcular suma" << endl;
		cout << "5. Salir" << endl;
		cout << "Opcion: ";
		cin >> opcion;	

		switch (opcion)
		{
		case 1:
			estadistica.CalcularMayor(numeros, 10);
			break;
		case 2:
			estadistica.CalcularMenor(numeros, 10);
			break;
		case 3:
			estadistica.CalcularPromedio(numeros, 10);
			break;
		case 4:
			estadistica.calcularsuma(numeros, 10);
				break;
		default:
			break;
		}
	} while (opcion != 4);
	return 0;	
}
