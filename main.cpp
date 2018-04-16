/*
Programa_7 suma y resta
Estructura selectiva doble compuesta
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 10 de febrero de 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int opcion, a, b, c;
    cout << "\t\n **** Programa suma y resta ****" << endl;
    cout<<"\n\n 1.- Suma  ";
    cout<<"\n\n 2.- Resta ";
    cout<<"\n\n Elige una opcion   ";
    cin>>opcion;

        if (opcion==1)
        {
            system ("cls");
            cout<<"\tLa suma";
            cout<<endl<<endl<<endl;
            cout<<"Dame el valor de A: ";
            cin>>a;
            cout<<endl;
            cout<<"Dame el valor de B: ";
            cin>>b;
            cout<<endl<<endl<<endl;
            c=a+b;
            cout<<"El resultado es:    ";
            cout<<c;
            cout<<endl<<endl;
            system ("pause");
        }

        else

            if(opcion==2)
        {
            system ("cls");
            cout<<"\tLa resta";
            cout<<endl<<endl<<endl;
            cout<<"Dame el valor de A: ";
            cin>>a;
            cout<<endl;
            cout<<"Dame el valor de B: ";
            cin>>b;
            cout<<endl<<endl<<endl;
            c=a-b;
            cout<<"El resultado es:    ";
            cout<<c;
            cout<<endl<<endl;
            system ("pause");
        }
    system ("cls");
    system ("pause");
    return 0;
}
