
#include "matriz.h";
#include <iostream>
#include <iomanip>
using namespace std;

void matriz:: sumaFilas(int matriz[FILAS][COLS])
{

	for (int i = 0; i < FILAS; i++) {

		int suma = 0;

		for (int j = 0; j < COLS; j++) {
			suma += matriz[i][j];
		}
		cout << endl << "La suma de la fila " << i+1 << ": " << suma;
	}

}

void matriz:: sumarColumnas(int matriz[FILAS][COLS])
{
	for (int i = 0; i < COLS; i++) {
		int sum = 0;
		for (int j = 0; j < FILAS; j++) {
			sum += matriz[j][i];
		}
		cout << endl << "La suma de la columna " << i+1 << ": " << sum;

	}
}

void matriz:: imprimirMatriz(int matriz[FILAS][COLS])
{
	cout << endl << "Matriz: " << endl;
	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLS; j++) {

			cout << setw(6) << matriz[i][j];
		}
		cout << endl;
	}
}

void matriz:: sumarDiagonal(int matriz[FILAS][COLS])
{
	int sumaM = 0;

	for (int i = 0; i < FILAS; i++) {
		for (int j = 0; j < COLS; j++) {

			if (i == j) {
				sumaM += matriz[i][j];
			}

		}

	}
	cout << "La suma de la diagonal es: " << sumaM;



}