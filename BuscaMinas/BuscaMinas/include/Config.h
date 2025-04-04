#ifndef CONFIG_H
#define CONFIG_H
#include <iostream>
using namespace std;

class Config
{
    public:
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero, string nombreUsuario);

        int getfilasTablero();
        void setfilasTablero(int filasTablero);

        int getcolumnasTablero();
        void setcolumnasTablero(int columnasTablero);

        int getminasTablero();
        void setminasTablero(int minasTablero);

        bool getmodoDesarrolladorTablero();
        void setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);

        int getvidasTablero();
        void setvidasTablero(int vidasTablero);

        string getnombreUsuario();
        void setnombreUsuario(string nombreUsuario);

        void menuConfiguracion();

    private:
        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrolladorTablero;
        int vidasTablero;
        string nombreUsuario;
};

#endif // CONFIG_H
