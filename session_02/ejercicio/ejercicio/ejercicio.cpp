
#include <iostream>
#include <string>
#include "Nombre.h"
using namespace std;


int main()
{
    string complname;

    cout << "ingrese su nombre completo";
    getline(cin, complname);

    cout << endl<<"Primer nombre: " <<  Nombre::ExtraerNombre(complname) << endl;
    cout << "Primer apellido: " << Nombre::ExtraerApellido(complname) << endl;
    cout << "Cantidad de vocales: " << Nombre::contarvocales( complname) << endl;
    cout << "En mayusculas: " << Nombre::convertirMayusculas(complname) << endl;
    cout << "Longitud total: " << Nombre::calcularlongitud(complname) << endl;

    
}

