#include <iostream>
#include "paquetes.h"

int main() {
    int cantidad = 0;

    double* pesos = crearRegistro(cantidad);

    ingresarPesos(pesos, cantidad);

    double total = calcularPesoTotal(pesos, cantidad);
    double promedio = total / cantidad;

    double limite = 0.0;
    std::cout << std::endl << "Ingrese el limite de peso permitido (kg): ";
    std::cin >> limite;
    int sobreLimite = contarSobreLimite(pesos, cantidad, limite);

    const double* masPesado = buscarMasPesado(pesos, cantidad);

    std::cout << "|        RESUMEN DEL REGISTRO          |" << std::endl;
    std::cout << "  Paquetes registrados: " << cantidad << std::endl;
    std::cout << "  Peso total: " << total << " kg" << std::endl;
    std::cout << "  Peso promedio: " << promedio << " kg" << std::endl;
    std::cout << "  Limite configurado: " << limite << " kg" << std::endl;
    std::cout << "  Paquetes sobre limite: " << sobreLimite << std::endl;
    std::cout << "  Paquete mas pesado: " << *masPesado << " kg" << std::endl;

    delete[] pesos;
    pesos = nullptr;

    return 0;
}