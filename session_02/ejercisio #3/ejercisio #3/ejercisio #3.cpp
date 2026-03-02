
#include <iostream>
#include "matriz.h"
using namespace std;

int main()
{
    int mat[FILAS][COLS];

    cout << "Ingrese los valores de la matriz: " << endl;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Fila " << i+1 << " Columna " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }
    int opcion;
    matriz::imprimirMatriz(mat);
    cout << endl;

    do {
        cout << "\n      MENU       " << endl;
        cout << "1--Suma de filas" << endl;
        cout << "2--Suma de columnas" << endl;
        cout << "3--Suma de diagonal" << endl;
        cout << "0--Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: 
            matriz::sumaFilas(mat); 
            break;
        case 2: matriz::sumarColumnas(mat);
            break;
        case 3: matriz::sumarDiagonal(mat);
            break;
        case 0:
            cout << "Saliendo..." << endl; 
            break;
        default: cout << "Opcion invalida" << endl;
        }
    } while (opcion != 0);

    return 0;
}

    


