#include "Nombre.h"


string Nombre::ExtraerNombre(string complname)
{
    int primerEspacio = complname.find(' ');
    return complname.substr(0,primerEspacio);
}

string Nombre::ExtraerApellido(string complname)
{
    int primerEspacio = complname.find(' ');
    int segundoEspacio = complname.find(' ', primerEspacio + 1);
    return complname.substr(primerEspacio + 1, segundoEspacio - primerEspacio - 1);
}

int Nombre::contarvocales(string complname)
{
    int vocales = 0;
    for (int i = 0; i < complname.length(); i++) {
        char c = tolower(complname[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vocales++;
    }
    return vocales;
}

string Nombre::convertirMayusculas(string complname)
{
    string mayusculas = complname;
    for (int i = 0; i < mayusculas.length(); i++) {
        mayusculas[i] = toupper(mayusculas[i]);
    }
    return mayusculas;
}

int Nombre::calcularlongitud(string complname)
{
    return complname.length();
}


