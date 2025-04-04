#include <iostream>
#include <unistd.h>
#include "Config.h"

using namespace std;

Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero, string nombreUsuario)
{
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
    this->nombreUsuario = nombreUsuario;
}

void Config::menuConfiguracion()
{
    int opciones;
    int valorIngresado;
    bool repetir = true;

    do
    {
        system("cls");
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << (this->getmodoDesarrolladorTablero() ? "Activado" : "Desactivado") << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Identificate ----------> " << this->getnombreUsuario() << endl;
        cout << "\t\t7. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;

        if (opciones != 7 && opciones != 6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }

        switch (opciones)
        {
            case 1:
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            case 2:
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            case 3:
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            case 4:
                this->setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;
                break;
            case 5:
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            case 6:
                {
                    string nuevoNombre;
                    cout << "\n\tIngrese su nuevo nombre de usuario: ";
                    cin.ignore();
                    getline(cin, nuevoNombre);
                    this->setnombreUsuario(nuevoNombre);
                    cout << "Bienvenido, " << this->getnombreUsuario() << " !" << endl;
                    break;
                }
            case 7:
                repetir = false;
                break;
        }
        system("pause");
    } while (repetir);
}

int Config::getfilasTablero() { return this->filasTablero; }
void Config::setfilasTablero(int filasTablero) { this->filasTablero = filasTablero; }

int Config::getcolumnasTablero() { return this->columnasTablero; }
void Config::setcolumnasTablero(int columnasTablero) { this->columnasTablero = columnasTablero; }

int Config::getminasTablero() { return this->minasTablero; }
void Config::setminasTablero(int minasTablero) { this->minasTablero = minasTablero; }

bool Config::getmodoDesarrolladorTablero() { return this->modoDesarrolladorTablero; }
void Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero) { this->modoDesarrolladorTablero = modoDesarrolladorTablero; }

int Config::getvidasTablero() { return this->vidasTablero; }
void Config::setvidasTablero(int vidasTablero) { this->vidasTablero = vidasTablero; }

string Config::getnombreUsuario() { return this->nombreUsuario; }
void Config::setnombreUsuario(string nombreUsuario) { this->nombreUsuario = nombreUsuario; }

