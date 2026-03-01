#include <iostream>
#include"inversion.h"

using namespace std;

int main()
{ 
    int tamano;
    cout << "ingrese la cantidad de elementos menor a 20" << endl;
    cin >> tamano;
    int* arrays;
    
    arrays =  new int[tamano];
    for (int i = 0; i < tamano; i++) {
        arrays[i] = rand() % 10 ;
    }

    cout << " los elementos serian: " << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arrays[i]<<"-";
    }
    cout << endl;
   inversion::invertirmatrices(arrays, tamano);

   delete[] arrays;
}

