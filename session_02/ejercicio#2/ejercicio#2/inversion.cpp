#include "inversion.h"
#include <iostream>

void inversion::invertirmatrices(int* arr, int tamano)
{
    
    for (int i = 0; i < tamano / 2; ++i) {
        std::swap(arr[i], arr[tamano - 1 - i]);
    }

    std::cout << "Los elementos invertidos serian: " << std::endl;
    for (int i = 0; i < tamano; ++i) {
        std::cout << arr[i] << "-";
    }
}