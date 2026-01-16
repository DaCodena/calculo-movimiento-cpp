//Muestra el menú principal del programa
#include "Menu.h"
#include "Distancia.h"
#include "Velocidad.h"
#include "Tiempo.h"

#include <iostream>

void Menu::mostrarMenu() {
    int opcion;

    do {
        std::cout << "\n=========================\n";
        std::cout << "      MENU PRINCIPAL     \n";
        std::cout << "=========================\n";
        std::cout << "1. Calcular distancia\n";
        std::cout << "2. Calcular tiempo\n";
        std::cout << "3. Calcular velocidad\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            double velocidad, tiempo;
            std::cout << "Ingrese la velocidad: ";
            std::cin >> velocidad;
            std::cout << "Ingrese el tiempo: ";
            std::cin >> tiempo;

            Distancia d;
            std::cout << "Distancia = "
                << d.calcular(velocidad, tiempo) << "\n";
            break;
        }
        case 2: {
            double distancia, velocidad;
            std::cout << "Ingrese la distancia: ";
            std::cin >> distancia;
            std::cout << "Ingrese la velocidad: ";
            std::cin >> velocidad;

            Tiempo t;
            std::cout << "Tiempo = "
                << t.calcularTiempo(distancia, velocidad) << "\n";
            break;
        }
        case 3: {
            double distancia, tiempo;
            std::cout << "Ingrese la distancia: ";
            std::cin >> distancia;
            std::cout << "Ingrese el tiempo: ";
            std::cin >> tiempo;

            Velocidad v;
            std::cout << "Velocidad = "
                << v.calcular(distancia, tiempo) << "\n";
            break;
        }
        case 4:
            std::cout << "Saliendo del programa...\n";
            break;

        default:
            std::cout << "Opcion invalida\n";
        }

    } while (opcion != 4);
}
