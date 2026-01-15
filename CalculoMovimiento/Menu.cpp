#include "Menu.h"
#include <iostream>

void Menu::mostrarMenu() {
    std::cout << "=========================\n";
    std::cout << "      MENU PRINCIPAL     \n";
    std::cout << "=========================\n";
    std::cout << "1. Calcular distancia\n";
    std::cout << "2. Calcular tiempo\n";
    std::cout << "3. Calcular velocidad\n";
    std::cout << "4. Salir\n";
    std::cout << "Seleccione una opcion: ";
}
