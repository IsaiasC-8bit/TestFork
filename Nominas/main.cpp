#include <iostream>


using namespace std;

int main()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout<<"\n\n\t\tNominas"<<endl;
        cout<<"\t --------------------"<<endl;
        cout<<"\t 1. Calcular devengos: "<<endl;
        cout<<"\t 2. Calcular deducciones: "<<endl;
        cout<<"\t 3. Calcular impuesto ISR (Impuesto sobre la renta): "<<endl;
        cout<<"\t 4. Calcular cuotas patronales: "<<endl;
        cout<<"\t 5. Calcular nomina: "<<endl;
        cout<<"\t 6. Periodo de liquidacion: "<<endl;
        cout<<"\t 7. Percepciones: "<<endl;
        cout<<"\t 8. Bases de liquidacion: "<<endl;
        cout<<"\t 9. Datos del trabajador: "<<endl<<endl;
        cout<<"\t 10. Salir del menu: "<<endl<<endl;
        cin>>opciones;
        switch (opciones)
        {
        case 1:
            {

            }
            break;
        case 2:
            {

            }
            break;
        case 3:
            {

            }
            break;
        case 4:
            {

            }
            break;
        case 5:
            {

            }
            break;
        case 6:
            {

            }
            break;
        case 7:
            {

            }
            break;
        case 8:
            {

            }
            break;
        case 9:
            {

            }
            break;
        case 10:
            {
            cout<<"\t Gracias por usar NomiReg!"<<endl;
            repetir=false;
            }

            break;
        }
    }while (repetir);
    return 0;
}
