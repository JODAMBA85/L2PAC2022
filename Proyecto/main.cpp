/* 
    Autor: Jonatán Amaya
    Universidad: UNAH-VS
    Carrera: Licenciatura en Informática Administrativa
    Hora: 18:00 - 19:00
    Catedrático: Lic. billy fernandez
    Clase: Lenguaje de Programación II
*/ 

#include <iostream>
#include "startShip.h"
#include "snake.h"
#include <string>

using namespace std;

string juegos [2][2] = {
    {"1", "starShip()"},
    {"2", "snake()"},
};

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true) {
        
        system ("cls");

        cout << endl;
        cout << "********************" << endl;
        cout << "   MENU DE JUEGOS   " << endl;
        cout << "********************" << endl;
        cout << endl;
        cout << endl;
        cout << "1 - starShip" << endl;
        cout << "2 - snake" << endl;
        cout << "0 - Salir" << endl;
        cout << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;
        
        switch (opcion)
        {
        case 1:
            starShip();
            break;
        
        case 2:
            snake();
            break;
         
        default:
        break;
        }

        system ("pause");
        cout << endl;
        if (opcion == 0)
        {
            break;
        }
    }

    return 0;
}
