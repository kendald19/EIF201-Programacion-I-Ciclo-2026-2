#pragma once
#include <string>
#include <cctype>
using namespace std;

class Nombre
{
private:

public:
	static string ExtraerNombre(string complname);
	static string ExtraerApellido(string complname);
	static int contarvocales(string complname);
	static string convertirMayusculas(string complname);
	static int calcularlongitud(string complname);

};

