#include "menus.h"
#include <iostream>
using namespace std;

void menuPrincipal() {
    int opcion;

    do {
        limpiarPantalla();
        mostrarTitulo("TALLER MECANICO - MENU PRINCIPAL");

        cout << "  1. Gestion de clientes" << endl;
        cout << "  2. Gestion de mecanicos" << endl;
        cout << "  3. Gestion de vehiculos" << endl;
        cout << "  4. Gestion de turnos" << endl;
        cout << "  5. Gestion de reparaciones" << endl;
        cout << "  6. Gestion de repuestos" << endl;
        cout << "  7. Gestion de facturas" << endl;
        cout << "  8. Listados, consultas e informes" << endl;
        cout << "  ------------------------------------" << endl;
        cout << "  0. Salir" << endl << endl;

        opcion = comprobarEntero(0, 8);

        switch (opcion) {
            case 1: menuClientes(); break;
            case 2: menuMecanicos(); break;
            case 3: menuVehiculos(); break;
            case 4: menuTurnos(); break;
            case 5: menuReparaciones(); break;
            case 6: menuRepuestos(); break;
            case 7: menuFacturas(); break;
            case 8: menuListadosConsultasInformes(); break;
        }

    } while (opcion != 0);
}

void menuClientes() {  }
void menuMecanicos() {  }
void menuVehiculos() {  }
void menuTurnos() {  }
void menuReparaciones() {  }
void menuRepuestos() {  }
void menuFacturas() {  }
void menuListadosConsultasInformes() {  }
