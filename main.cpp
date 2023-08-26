#include "neurona.h"
#include "administradora.h"
#include <iostream>

using namespace std;

int main()
{
    Neurona n;
    administradora a;
    int id, px, py, red, blue, green, opc=0;
    float voltaje;
    do
    {
        system("cls");
        cout<<"<1> Agregar inicio"<<endl;
        cout<<"<2> Agregar final"<<endl;
        cout<<"<3> Mostrar"<<endl;
        cout<<"Elige una opcion: ";
        cin>>opc;
        system("cls");

        switch(opc){
        case 1:
            cout<<"Ingresa ID: "; cin>>id;
            cout<<"Ingresa posicion x: "; cin>>px;
            cout<<"Ingresa posicion y: "; cin>>py;
            cout<<"Ingresa red: "; cin>> red;
            cout<<"Ingresa blue: "; cin>>blue;
            cout<<"Ingresa green: "; cin>>green;
            cout<<"Ingresa voltaje: "; cin>>voltaje;

            n.setID(id);
            n.setPX(px);
            n.setPY(py);
            n.setRed(red);
            n.setBlue(blue);
            n.setGreen(green);
            n.setVolt(voltaje);

            a.agregarInicio(n);
            break;
        case 2:
            cout<<"Ingresa ID: "; cin>>id;
            cout<<"Ingresa posicion x: "; cin>>px;
            cout<<"Ingresa posicion y: "; cin>>py;
            cout<<"Ingresa red: "; cin>> red;
            cout<<"Ingresa blue: "; cin>>blue;
            cout<<"Ingresa green: "; cin>>green;
            cout<<"Ingresa voltaje: "; cin>>voltaje;

            n.setID(id);
            n.setPX(px);
            n.setPY(py);
            n.setRed(red);
            n.setBlue(blue);
            n.setGreen(green);
            n.setVolt(voltaje);

            a.agregarFinal(n);
            break;
        case 3:
            a.mostrar();
            system("pause");
            break;
        }
    }while(opc!=4);

    return 0;
}
